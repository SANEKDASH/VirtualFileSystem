#ifndef CONSOLE_HEADER
#define CONSOLE_HEADER

#include <iostream>
#include <fstream>

#include "commands.hpp"

class Console
{
    private:
// smells like dog shit
        std::string cur_command;

        CommandCodes_t cur_command_code;

    public:

        Console();
        Console(char *command);

        CommandCodes_t GetCommand();
        CommandCodes_t GetCurrentCommandCode();

        void PrintCommand();

        ~Console();
};

#endif
