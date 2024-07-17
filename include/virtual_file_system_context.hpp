#ifndef VFS_CONTEXT_HEADER
#define VFS_CONTEXT_HEADER

#include "console.hpp"
#include "tree.hpp"
#include "data.hpp"

class VFSContext
{
    public:
        Console console;

        Tree file_system_tree;

        VFSContext();

        ~VFSContext();
};

#endif
