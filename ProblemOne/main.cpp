#include "Color.cpp"
#include "Color.h"

void testColor();
int main()
{
    //testColor();
}

void testColor()
{
    Color red(255, 0, 0);
    Color green(0,1,0);
    std::cout << red << green;
}