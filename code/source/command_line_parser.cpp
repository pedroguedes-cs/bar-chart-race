#include <iostream>
#include <sstream>

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
        if (i == argc - 1)
        {
            filePath = argv[i];
            break;
        }

        if (argv[i] == "-b")
        {
            if (i == argc - 1)
            {
                printHelpMessage("Missing argument");
                std::exit(EXIT_FAILURE);
            }

            if (isInteger(argv[i+1]))
            {
                int value = std::stoi(argv[i+1]);

                if (value < 1 || value > 15)
                {
                    printHelpMessage("Value out of range");
                    std::exit(EXIT_FAILURE);
                }
                else
                {
                    visibleBars = value;
                    i++;
                }
            }
            else
            {
                printHelpMessage("Missing argument");
                std::exit(EXIT_FAILURE);   
            }
        }
        else if (argv[i] == "-f")
        {
            if (i == argc - 1)
            {
                printHelpMessage("Missing argument");
                std::exit(EXIT_FAILURE);
            }
            if (isInteger(argv[i+1]))
            {
                int value = std::stoi(argv[i+1]);

                if (value < 1 || value > 24)
                {
                    printHelpMessage("Value out of range");
                    std::exit(EXIT_FAILURE);
                }
                else
                {
                    fps = value;
                    i++;
                }
            }
            else
            {
                printHelpMessage("Missing argument");
                std::exit(EXIT_FAILURE);   
            }
        }
        else
        {
            std::ostringstream message;
            message << "Invalid argumment " << "[ " << "'" << argv[i] << "' ]";

            printHelpMessage(message.str());
            std::exit(EXIT_FAILURE);
        }
    }

    if (filePath == "")
    {
        printHelpMessage("Missing file path");
        std::exit(EXIT_FAILURE);
    }

    barChart.setVisibleBars(visibleBars);
    barChart.setFPS(fps);
    barChart.setDataFilePath(filePath);
}

bool isInteger(std::string number)
{
    if (number.empty())
    {
        return false;
    }

    if (number == "+" || number == "-")
    {
        return false;
    }

    for (auto i = number.begin(); i < number.end(); i++)
    {
        if ((*i == '+' || *i == '-') && i != number.begin())
        {
            return false;
        }

        if (*i != '-' && *i != '+' && (*i < '0' || *i > '9'))
        {
            return false;
        }
    }

    return true;
}