/*
[ ] Picture should hold a 2D vector of colors. <br>
[ ] Should have a constructor that takes in a width and height and sets all the colors to white. <br>
[ ] Also have a setPixel(x: int, y: int, c: Color): void function that sets the appropiate member of the 2D array to c. <br>
[ ] Include the getHeight(): int and getWidth(): int functions that returns the two dimensions of your 2D vector <br>
[ ] Ovverride the << operator in picture to display the picture by displaying each of the Colors in their appropiate location in the image
*/
#include <iostream>
#include <ostream>
#include <vector>
#include "Color.h"
#include "Color.cpp"

class Picture
{
private:
    std::vector<Color> Colors;
    int width, height;

public:
    Picture(int w, int h);
    
};