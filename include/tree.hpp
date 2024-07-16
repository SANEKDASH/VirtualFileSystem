#ifndef TREE_HPP
#define TREE_HPP
#include <iostream>

#include <vector>
#include <string>

#include "data.hpp"

const int DIR_T  = 0;
const int FILE_T = 1;

class Tree {
private:
    Data* data;
    int count_children = 0;
    int type;
public:
    std::vector<Tree*> children;

    Tree();

    Tree(const std::string& name);

    ~Tree();

    Tree* add_node(const std::string name, int type);

    void add_text(const std::string text);

    bool has_children() const;

    void print_node() const;

    void write_file(const std::string& text);

    void cat_file() const;
};

#endif