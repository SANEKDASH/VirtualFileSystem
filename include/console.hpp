#ifndef CONSOLE_HEADER
#define CONSOLE_HEADER

#include <iostream>
#include <fstream>

typedef enum
{
    kListDirectory,
    kPrintFileData,
    kUnknownCommand,
} Commands_t;

class Console
{
    private:

        std::string cur_command;

    public:

        Console();

        Commands_t GetCommand();

        void PrintCommand();

        ~Console();
};

#endif
