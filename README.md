                                                         CLI-toolkit
A simple comand line tool that can perform some simple actions on a text file such as make a copy,
find a specific word, find duplicate words or read the general stats of the file.

#Features:
**make_copy** - Crates a duplicate of a file, for example, Tests.txt -> Tests_copy.txt
**find_duplicate** - Finds words that appear 2 or more times in the text and returns the amount of times its been found in the text.
**find_word** - Finds whichever word you want it to in the text, and returns the line and position of each instance of the word.
**stats** - Counts the amount of lines, words and letters in your file.

#Installation:
1) Clone the repository:
In *bash*:

2) git clone https://github.com/YOUR-USERNAME/CLI_toolkit.git
Enter the projects directory:
cd CLI_toolkit

4) Using Cmake, build:
mkdir build
cd build
cmake ..
make

4)Run the program:
./CLI_toolkit [command] [filename] , in the case of *find word*, ./CLI_toolkit [command] [filename] [word you want to find]


Mabe if i ever decide, I may expand the project and add some cooler features when i have the proper skills.




