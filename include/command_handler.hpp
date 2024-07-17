#ifndef CMD_HANDLER_HEADER
#define CMD_HANDLER_HEADER

#include "virtual_file_system_context.hpp"

typedef enum
{
    kCommandHandlerNoErrs,
    kCantHandleUnknownCommand,
} CommandHandlerErrs_t;

CommandHandlerErrs_t HandleCommands(VFSContext &vfs_context);

#endif
