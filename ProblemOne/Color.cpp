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
#include <vector>

Color::Color(int r, int g, int b) : red(r), green(g), blue(b)
{
}

std::string Color::getColor() const
{
    int colorVal[3] = { red, green, blue };
    int maxVal = -1;
    
    std::vector<std::string> highestColors;

    // Find the highest color value
    for (int i = 0; i < 3; i++)
    {
        if (colorVal[i] > maxVal)
        {
            maxVal = colorVal[i];
            highestColors.clear();
            switch (i)
            {
            case 0:
                highestColors.push_back("R");
                break;
            case 1:
                highestColors.push_back("G");
                break;
            case 2:
                highestColors.push_back("B");
                break;
            }
        }
        else if (colorVal[i] == maxVal)
        {
            switch (i)
            {
            case 0:
                highestColors.push_back("R");
                break;
            case 1:
                highestColors.push_back("G");
                break;
            case 2:
                highestColors.push_back("B");
                break;
            }
        }
    }

    // Determine the color based on the highestColors vector
    if (highestColors.size() == 1)
    {
        if (highestColors[0] == "G")
        {
            return "V";
        }
        return highestColors[0];
    }
    else if (highestColors.size() == 3 && red == 250)
    {
        if (red >= 50)
        {
            if (red > 250)
            {
                return "W";
            }
            return "D";
        }
        return "G";
    }
    else if (highestColors.size() >= 2)
    {
        if (highestColors[0] == "R")
        {
            if (highestColors.size() > 1 && highestColors[1] == "B")
            {
                return "P";
            }
            return "Y";
        }
        if (highestColors[0] == "B")
        {
            return "T";
        }
    }

    return "Color not found";
}

std::ostream &operator<<(std::ostream &strm, const Color &obj)
{
    strm << obj.getColor() << "\n";
    return strm;
}