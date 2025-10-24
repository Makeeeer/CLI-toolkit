#include <iostream>
#include <string>

void PrintHelp()
{
    std::cout << "Sup";
}

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        PrintHelp();
        return 0;
    }
}
