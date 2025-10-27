#pragma once
#include <iostream>
#include <vector>


std::vector<std::string> ReadLineByLine(const std::string& FileName);
void ReadIntoSampleFile(const std::string& FileName);
void ReadLetterByLetter(const std::string& FileName);
bool IsFileFound(const std::string& FileName);
bool IsFileOpen(const std::string& FileName);






