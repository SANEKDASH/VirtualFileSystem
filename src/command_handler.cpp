#include "command_handler.hpp"

CommandHandlerErrs_t HandleCommands(VFSContext &context)
{
    while (context.console.GetCommand() != kExit)
    {
        switch (context.console.GetCurrentCommandCode())
        {
            case kListDirectory:
            {
                std::cout << "HUYATINA BLYAT\n";

                break;
            }

            case kExit:
            default:
            {
                std::cout << "wtf???\n";

                return kCantHandleUnknownCommand;

                break;
            }
        }
    }

    return kCommandHandlerNoErrs;
}
