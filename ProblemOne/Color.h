/*
Color should have three int instance data: <br>
[ ] red
[ ] green
[ ] blue

    [ ] Color shoud have a constructor that creates a Color
        using those three parameters

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
    std::string getColor() const;
    friend std::ostream &operator<<(std::ostream &strm, const Color &obj);

};