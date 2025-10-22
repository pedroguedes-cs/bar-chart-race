#pragma once

#include <string>
#include <vector>

#include "bar.hpp"

class BarChart
{
    std::string barChartTitle;
    int barChartVisibleBars;
    int barChartFPS;
    int barChartFrameDelayMs;
    std::string barChartDataFilePath;
    std::vector<std::vector<Bar>> barChartData;

    public:
        // Constructors
        BarChart();

        // Setters
        void setTitle(std::string title);
        void setVisibleBars(int visibleBars);
        void setFPS(int fps);
        void setFrameDelayMs(int milliseconds);

        // Getters
        std::string getTitle();
        int getVisibleBars();
        int getFPS();
        int getFrameDelayMs();

        // Manipulation
        void loadFromFile();
        void sortFrames();

        // Animation
        void renderBarChart();
};