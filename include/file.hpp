#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <string>

class File {
    std::string name;
    size_t sz;
    size_t n_pages;
    char** pages;
public:
    File(const std::string& name);
    void change_name(const std::string& new_name);
    ~File() = default;
};

#endif