#include "tree.hpp"
#include <deque>

Tree::Tree() : data(new Data("root"))
             , type(DIR_T) {}

Tree::Tree(const std::string& name) {
    data = new Data(name);
}

Tree::~Tree() {
    std::deque<Tree*> all_nodes;
    Tree* cur_node = this;

    for (int i = 0; i < cur_node->count_children; ++i) {
        if (cur_node->count_children > 0) {
            for (int j = 0; j < cur_node->count_children; ++j) {
                all_nodes.push_back(cur_node->children[i]);
            }
        }

        delete cur_node->data;
        cur_node = all_nodes.front();
        all_nodes.pop_front();
    }
}

Tree* Tree::add_node(const std::string name, int type){
    children.push_back(nullptr);
    children[count_children] = new Tree(name);
    children[count_children]->type = type;
    children[count_children]->parent = this;
    ++count_children;

    return children[count_children - 1];
}

void Tree::add_text(const std::string text){
    data->get_text() = text;
}

bool Tree::has_children() const {
    return count_children;
}

void Tree::print_node() const {
    std::cout << std::endl;

    std::cout << "NAME:" << data->get_name() << std::endl;
    std::cout << "TYPE:" << type << std::endl;

    if (parent != nullptr)
        std::cout << "PARENT:" << parent->data->get_name() << std::endl;

    std::cout << "TEXT:" << data->get_text() << std::endl;
    std::cout << "NUM_CHILDREN:" << count_children << std::endl;

    std::cout << std::endl;
}

void Tree::write_file(const std::string& text) {
    if (type == FILE_T) {
        data->set_text(text);
    } else {
        std::cout << "Error: can't write in the directory" << std::endl;
    }
}

void Tree::cat_file() const {
    std::cout << std::endl;

    std::cout << "NAME:" << data->get_name() << std::endl;
    std::cout << data->get_text() << std::endl;

    std::cout << std::endl;
}

void Tree::add_text_in_file(const std::string& text) {
    if (type == FILE_T) {
        data->get_text() += text;
    } else {
        std::cout << "Error: can't write in the directory" << std::endl;
    }
}

Tree* Tree::cd_front(int num_of_child) const {
    if (num_of_child >= count_children || num_of_child < 0) {
        std::cout << "Error: out of children" << std::endl;
        return nullptr;
    }

    if (children[num_of_child]->type == FILE_T) {
        std::cout << "Error: can't cd with file" << std::endl;
        return nullptr;
    }
    
    return children[num_of_child];


}

Tree* Tree::cd_back() const {
    if (parent == nullptr) {
        std::cout << "Error: you are in the root" << std::endl;
    }

    return parent;
}

void Tree::ls() const {
    for (int i = 0; i < count_children; ++i) {
        std::cout << children[i]->data->get_name() << " ";
    }

    std::cout << std::endl;
}
