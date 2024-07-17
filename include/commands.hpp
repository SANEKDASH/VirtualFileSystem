#ifndef COMMANDS_HEADER
#define COMMANDS_HEADER

typedef enum
{
    kExit          = 0,
    kListDirectory = 1,
    kUnknownCommand,
} CommandCodes_t;

struct Command
{
    const char     *command_string;
    CommandCodes_t  command_code;
};

const Command kCommandArray[] =
{
    {"exit", kExit},
    {"ls"  , kListDirectory}
};

const int kCommandArraySize = sizeof(kCommandArray) / sizeof(kCommandArray[0]);

#endif
