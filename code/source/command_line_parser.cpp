#include "../include/command_line_parser.hpp"
#include "../include/printer.hpp"


/*

1) invalid argument
2) missing value
3) value out of range
4) missing data file path
5) invalid file path

*/

void parseCommandLine(int argc, char* argv[], BarChart& barChart)
{
    int visibleBars = 5;
    int fps = 24;
    std::string filePath = "";

    for (int i = 1; i < argc; i++)
    {

    }

    if (filePath == "")
    {
        printHelpMessage("Missing file path");
        std::exit(EXIT_FAILURE);
    }
}