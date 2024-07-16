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
    std::cout << "NAME:" << data->get_name() << std::endl;
    std::cout << "TYPE:" << type << std::endl;
    std::cout << "TEXT:" << data->get_text() << std::endl;
    std::cout << "NUM_CHILDREN:" << count_children << std::endl;
}

void Tree::write_file(const std::string& text) {
    if (type == FILE_T) {
        data->set_text(text);
    } else {
        std::cout << "Error: can't write in the directory" << std::endl;
    }
}

void Tree::cat_file() const {
    std::cout << "NAME:" << data->get_name() << std::endl;
    std::cout << data->get_text() << std::endl;
}
