#include <iostream>

#include "tree.hpp"
#include "data.hpp"
int main() {
    Tree* mem = new Tree;
    mem->add_node("file1.txt", FILE_T);
    mem->children[0]->add_text("henlo");
    mem->add_node("first_dir", DIR_T);
    mem->children[0]->add_text_in_file(", bro");

    mem->children[1]->add_node("second_dir", DIR_T);

    mem->print_node();
    mem->children[0]->print_node();
    mem->children[1]->print_node();
    mem->children[1]->children[0]->print_node();

    mem->ls();

    Tree* cur_ptr = mem->cd_front(1);
    cur_ptr->print_node();

    cur_ptr = cur_ptr->cd_back();
    cur_ptr->print_node();
    
    cur_ptr = cur_ptr->cd_front(1)->cd_front(0);
    cur_ptr->print_node();
}