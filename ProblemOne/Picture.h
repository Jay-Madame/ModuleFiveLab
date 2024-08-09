/*
[x] Picture should hold a 2D vector of colors. <br>
[x] Should have a constructor that takes in a width and height and sets all the colors to white. <br>
[x] Also have a setPixel(x: int, y: int, c: Color): void function that sets the appropiate member of the 2D array to c. <br>
[x] Include the getHeight(): int and getWidth(): int functions that returns the two dimensions of your 2D vector <br>
[x] Ovverride the << operator in picture to display the picture by displaying each of the Colors in their appropiate location in the image
*/
#include <iostream>
#include <ostream>
#include <vector>
#include "Color.h"
#pragma once

class Picture
{
private:
    int width, height;
    std::vector<std::vector<Color>> colors;

public:
    Picture(int w, int h);
    void setPixel(int x, int y, Color color);
    int getHeight() const;
    int getWidth() const;
    friend std::ostream &operator<<(std::ostream &strm, const Picture &obj);
};