#include "data.hpp"

Data::Data(const std::string& name) : name(name) {}

std::string& Data::get_text() {
    return text;
}

std::string& Data::get_name() {
    return name;
}

void Data::set_name(const std::string& new_name) {
    name = new_name;
}

void Data::set_text(const std::string& new_text) {
    text = new_text;
}
