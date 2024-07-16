#include "../include/virtual_file_system_context.hpp"
#include "../include/command_handler.hpp"

int main()
{

    VFSContext vfs_context{};

    HandleCommands(vfs_context);

    return 0;
}
