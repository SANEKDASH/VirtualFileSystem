#include "../include/virtual_file_system_context.hpp"

VFSContext::VFSContext() : console()
{

}

VFSContext::~VFSContext()
{

}


CommandHandlerErrs_t HandleCommands(VFSContext &vfs_context)
{
    return kCommandHandlerNoErrs;
}
