#include "Color.cpp"
#include "Color.h"
#include "Picture.h"
#include "Picture.cpp"
#include <iostream>

void testColor();
void testPicture();

int main()
{

    //testColor();
    testPicture();
}

void testColor()
{
    Color red(255, 0, 0);
    Color green(0, 1, 0);
    std::cout << red << green << std::endl;
}
void testPicture()
{
    Color red(255, 0, 0);
    Color green(0, 255, 0);
    Picture newPic(15, 15);
    newPic.setPixel(0, 0, red);
    newPic.setPixel(1, 0, green);
    std::cout << newPic << std::endl;
}