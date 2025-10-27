#include "commands.hpp"
#include "file_utils.hpp"
#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>
#include <vector>

void FindDuplicates(const std::string &FileName)
{

    std::ifstream FileToRead(FileName);
    std::unordered_map<std::string, int> Dupes;
    std::string word;
    while (FileToRead >> word)
    {
        ++Dupes[word];
    }
    

    for (const auto &parse : Dupes)
    {
        if (parse.second > 2)
        {
            std::cout << "The word: " << parse.second << " appeared "<< parse.first << "times! \n";
        }
    }
    std::cout<< " All else appeared less than 2 times! \n";
}
