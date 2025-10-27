#include "file_utils.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

std::vector<std::string> ReadLineByLine(const std::string &FileName)
{
    std::vector<std::string> Lines;
    std::string line;
    std::ifstream FileToRead(FileName);
    while (std::getline(FileToRead, line))
    {
        Lines.push_back(line);
    }
    return Lines;
}

/*void ReadLetterByLetter(const std::string &FileName
{
     std::ifstream CountFor (FileName);
     std::string Sample;
     int counter = 0;
     while(std::getline(CountFor, Sample))
     {
        for(auto x : Sample)
        {
        counter++;
        }
     }
     

};*/



bool IsFileFound(const std::string &FileName)
{
    std::ifstream FileToCheck(FileName);
    return FileToCheck.is_open();
    
}

