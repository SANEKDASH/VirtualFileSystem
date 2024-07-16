#ifndef CMD_HANDLER_HEADER
#define CMD_HANDLER_HEADER

#include "../include/virtual_file_system_context.hpp"

typedef enum
{
    kCommandHandlerNoErrs,
} CommandHandlerErrs_t;

CommandHandlerErrs_t HandleCommands(VFSContext &vfs_context);

#endif
