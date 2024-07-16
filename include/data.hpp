#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>

#include <string>

class Data {
private:
    std::string text;
    std::string name;
public:
    Data(const std::string& name);

    std::string& get_text();

    std::string& get_name();

    void set_name(const std::string& new_name);

    void set_text(const std::string& new_text);
};

#endif