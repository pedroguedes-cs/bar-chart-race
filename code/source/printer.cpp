#include "../include/printer.hpp"


void printHelpMessage(std::string errorMessage = "")
{
    std::cout << "\n\n========[HELP]\n\n";
    if (errorMessage != "")
    {
        std::cout << "Error: " << errorMessage << "\n\n";
    }
    std::cout << "Usage: bcr [<options>] <input_data-file>\n"
              << "  Bar chart race options:\n"  
              << "      -b <num> Max # of bars in a single chart.\n"  
              << "               Valid range is [1, 15]. Default value is 5.\n"  
              << "      -f <num> Animation speed in fps (frames per second).\n"  
              << "               Valid range is [1, 24]. Default value is 24.\n\n\n\n";
}