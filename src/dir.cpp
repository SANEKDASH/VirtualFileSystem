#include "dir.hpp"

Dir::Dir(const std::string& name) : name(name), sz(0), n_files(0), files(nullptr) {}

void Dir::change_name(const std::string& new_name) {
    name = new_name;
}