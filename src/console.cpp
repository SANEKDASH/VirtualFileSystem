#include "../include/console.hpp"


Console::Console() : cur_command()
{

}

Console::~Console()
{

}

Commands_t Console::GetCommand()
{
    std::getline(std::cin, cur_command);

    return kUnknownCommand;
}

void Console::PrintCommand()
{
    std::cout << cur_command << "\n";
}
