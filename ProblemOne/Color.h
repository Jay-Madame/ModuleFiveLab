/*
Color should have three int instance data: <br>
[ ] red
[ ] green
[ ] blue

    [ ] Color shoud have a constructor that creates a Color
        using those three parameters
    [ ] Should have static Color constants:<br>
        [ ] RED(255, 0, 0)<br>
        [ ] YELLOW(255, 255, 0) <br>
        [ ] BLUE(0, 0, 255)<br>
        [ ] GREEN(0, 255, 0)<br>
        [ ] PURPLE(150, 0, 255)<br>
        [ ] ORANGE(255, 150, 0)<br>
        [ ] BLACK(0, 0, 0)<br>
        [ ] WHITE(255, 255, 255)<br>
        [ ] GRAY(150, 150, 150)<br>

    [ ] Color should override the << operator that will print out a
        capital lettter based on the highest value of the color member
*/

#pragma once
#include <ostream>
#include <iostream>
#include <unordered_map>

class Color
{
private:
    int red, green, blue;
    std::string nameOfColor;
    std::unordered_map<std::string, std::string> colors;

public:
    Color(int r, int g, int b);
    std::string getColor(int r, int g, int b) const;
    friend std::ostream &operator<<(std::ostream &strm, const Color &obj);
};