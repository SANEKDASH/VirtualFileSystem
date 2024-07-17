#include "console.hpp"

Console::Console() {}

Console::Console(char *command) : cur_command(command) {}

Console::~Console() {}

CommandCodes_t Console::GetCommand()
{
    std::getline(std::cin, cur_command);

    for (int i = 0; i < kCommandArraySize; i++)
    {
        if (cur_command == kCommandArray[i].command_string)
        {
            cur_command_code = kCommandArray[i].command_code;

            return kCommandArray[i].command_code;
        }
    }

    return kUnknownCommand;
}

CommandCodes_t Console::GetCurrentCommandCode()
{
    return cur_command_code;
}

void Console::PrintCommand()
{
    std::cout << cur_command << "\n";
}
