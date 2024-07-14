#include "memory.hpp"

const int memory_size = 1024;
const int sign_delta  = 128;
const int arr_delta   = 256;
const int data_delta  = 512; 

Memory::Memory() : v_mem(new char [memory_size])
                 , name_ptr(v_mem)
                 , sign_ptr(v_mem + sign_delta)
                 , arr_ptr(v_mem + arr_delta)
                 , data(v_mem + data_delta) {}

Memory::~Memory() {
    delete [] v_mem;
}