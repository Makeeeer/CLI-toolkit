#include "commands.hpp"
#include "file_utils.hpp"
#include <iostream>
#include <fstream>


void make_copy (const std::string& FileName = "Tests.txt")
{
    
 
    size_t dotPos {FileName.find_last_of('.')};
    std::string FirstHalf {FileName.substr(0,dotPos)};
    std::string Ext {FileName.substr(dotPos)};
    std::string FinalName {FirstHalf + "_copy" + Ext};
    std::ofstream NewFile (FinalName);
    for(const auto& CurrentLine : ReadLineByLine(FileName) )
    {
        NewFile<<CurrentLine << '\n';
    }

    std::cout<<"All done! The new name of the new file is - " << FinalName << '\n'; 
};