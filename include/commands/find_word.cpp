#include "commands.hpp"
#include "file_utils.hpp"
#include <iostream>

void FindWord(const std::string &FileName, const std::string &word)
{
    size_t LineCount = 0;
  
    std::cout << "The word: " << word << " was found on \n";
    for (const auto &LineToCheck : ReadLineByLine(FileName))
    {
        ++LineCount;
        size_t pos = 0;
        while ((pos = LineToCheck.find(word, pos)) != std::string::npos)
        {
            std::cout << "line - " << LineCount << " position - " << pos << '\n';
            pos += word.length();
        }
    }
}

