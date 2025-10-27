#include "commands.hpp"
#include "file_utils.hpp"
#include <iostream>
#include <fstream>


void make_copy (const std::string& FileName)
{
    const std::string NewFileName = FileName + "_copy";
    std::ofstream NewFile (NewFileName);
    for(const auto& CurrentLine : ReadLineByLine(FileName) )
    {
        NewFile<<CurrentLine << '\n';
    }

    std::cout<<"All done! The new name of the new file is - " << NewFileName; 
};