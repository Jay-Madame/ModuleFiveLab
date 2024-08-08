/*
 [ ] FileNotFoundException - if the file holding the colors is not found. Print a message to the console explaining what happened and shut down the program <br>

 [ ] ColorFileFormatException - if the file format seems to be wrong, that is, if it cannot pull a color coordinate from the file. Print an appropiate message to the console and shut down the program <br>

 [ ] CoordinateOutOfRangeException - if the X or Y coordinate is negative. Log the error and do not create a color vector for that coordinate <br>

 [ ] ColorVectorOutOfRangeException - if the numbers in the Color vector are less than 0 or greater than 255.<br>
    [ ] Log the error by printing out the message like: "Error! X: [coord] Y:[coord] Green value too low: min: 0, actual -56."<br>
    [ ] Then, change the vector so that if the number was less than 0, bring it to 0, and if the number was greater than 255, bring it to 255.<br>
    [ ] Color Vector file format: The Color vector file shoudl hold five integers on each line, separated by spaces: <br>
        XCoord YCoord Red Green Blue <br>
*/
#include "Color.h"
#include <string>

Color::Color(int r, int g, int b)
{
    colors["25500"] = "RED";
    colors["2551500"] = "ORANGE";
    colors["2552550"] = "YELLOW";
    colors["02550"] = "GREEN";
    colors["00255"] = "BLUE";
    colors["1500255"] = "PURPLE";
    colors["000"] = "BLACK";
    colors["255255255"] = "WHITE";
    colors["150150150"] = "GRAY";
}
std::string Color::getColor(int r, int g, int b) const
{
    std::string colorInput = "";
    colorInput += std::to_string(r);
    colorInput += std::to_string(g);
    colorInput += std::to_string(b);
}

std::ostream &operator<<(std::ostream &strm, const Color &obj)
{
}