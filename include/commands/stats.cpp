#include "commands.hpp"
#include "file_utils.hpp"
#include <iostream>
#include <fstream>

void stats(const std::string &FileName)
{
    std::ifstream FileToRead (FileName);
    std::cout << "The file has ";
    int Counter = 0;
    char ch;
    std::string Word;
    for (auto Line : ReadLineByLine(FileName))
    {
        ++Counter;
    }
    std::cout << Counter<< " Lines, \n";
    Counter = 0;
    while (FileToRead >> Word)
    {
        ++Counter;
    }
    std::cout<<Counter<< " Words, \n";
    Counter = 0;
    while(FileToRead.get(ch)) 
    {
        ++Counter;
    }
    std::cout << Counter << " Letters \n";
}