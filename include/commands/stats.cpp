#include "commands.hpp"
#include "file_utils.hpp"
#include <iostream>
#include <fstream>

void stats(const std::string &FileName)
{
    std::ifstream FileToRead (FileName);
    std::cout << "The file has ";
    std::ifstream FileForLetters (FileName);  // to avoid reading from the end of the file, check bellow
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
    std::cout<<Counter<< " Words, \n";       // would normaly read all the file.  
    Counter = 0;
    while(FileForLetters.get(ch)) 
    {
        ++Counter;
    }
    std::cout << Counter << " Letters \n";
}