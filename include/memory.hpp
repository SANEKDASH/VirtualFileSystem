#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <iostream>

class Memory {
    char* v_mem     = nullptr;

    char* name_ptr  = nullptr;
    char* sign_ptr  = nullptr;
    char* arr_ptr   = nullptr;
    char* data      = nullptr;
public:
    Memory();       // сделать конструктор от аргументов
    ~Memory();
};
#endif