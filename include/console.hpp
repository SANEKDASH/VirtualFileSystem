#ifndef CONSOLE_HEADER
#define CONSOLE_HEADER

#include <string>

typedef enum
{
    kListDirectory,
    kPrintFileData,
} Commands_t;

class Console
{
    private:
        std::string cur_comand;

    public:
        Commands_t GetCommand(FILE *input_file);

        Console();
        ~Console();
}

#endif
