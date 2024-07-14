#ifndef DIR_HPP
#define DIR_HPP

#include <iostream>
#include <string>

class Dir {
    std::string name;
    size_t sz;
    size_t n_files;
    char** files;
public:
    Dir(const std::string& name);
    void change_name(const std::string& new_name);
    ~Dir() = default;

};
#endif