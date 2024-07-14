#include "file.hpp"

File::File(const std::string& name) : name(name), sz(0), n_pages(0), pages(nullptr) {}

void File::change_name(const std::string& new_name){
    name = new_name;
}
