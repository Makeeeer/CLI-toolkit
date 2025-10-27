#include <iostream>
#include <string>
#include <fstream>
#include "commands.hpp"
#include "file_utils.hpp"

void PrintHelp()
{
    std::cout << "Not enough arguments, available commands are below: \n"
              << "make_copy \n"
                 "find_duplicates \n"
                 "find_word [word] \n"
                 "stats \n";
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        PrintHelp();
    }
    const std::string command = argv[1];
    std::string FileName = argv[2];
    
    std::string WordToFind;
    if (command == "find_word" && argc > 3)
    WordToFind = argv[3];

    

    
    if (command == "make_copy" && argc == 3)
    {
        make_copy(FileName);
    }
    else if (command == "find_duplicates" && argc == 3)
    {
       FindDuplicates(FileName);
    }
    else if (command == "find_word" && argc == 4)
    {
        FindWord(FileName,WordToFind);
    }
    else if (command == "stats" && argc == 3)
    {
        stats(FileName);
    }
    else
    {
        PrintHelp();
    }
}
