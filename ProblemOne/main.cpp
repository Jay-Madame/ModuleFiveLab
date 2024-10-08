#include "Color.h"
#include "Color.cpp"
#include "Picture.h"
#include "Picture.cpp"
#include "exceptions.h"
#include <fstream>
#include <sstream>
#include <iostream>

int main()
{
    std::string fileName;
    std::cout << "Enter file name: ";
    std::cin >> fileName;
    Picture newPic(3, 3);
    try
    {
        std::ifstream file(fileName);
        if (!file.is_open())
        {
            throw FileNotFoundException("File not found: " + fileName);
        }

        std::string line;

        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            int x, y, r, g, b;
            if (!(iss >> x >> y >> r >> g >> b))
            {
                throw ColorFileFormatException("Invalid file format: " + line);
            }

            if (x < 0 || y < 0)
            {
                std::string errorMssg = "Error: X or Y coordinate out of range. X: " + x;
                errorMssg += ", Y: " + y;
                throw CoordinateOutOfRangeException(errorMssg);
                continue;
            }

            if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
            {
                std::cerr << "Error! X: " << x << " Y: " << y << " ";
                if (r < 0 || r > 255) // r is out of range
                {
                    std::cerr << "Red value too ";
                    if (r < 0)
                    {
                        std::cerr << "low: min: 0, actual: " << r;
                        r = 0;
                    }
                    else if (r > 255)
                    {
                        std::cerr << "high: max: 255, actual: " << r;
                        r = 255;
                    }
                }
                if (g < 0 || g > 255) // g is out of range
                {
                    std::cerr << "Green value too ";
                    if (g < 0)
                    {
                        std::cerr << "low: min: 0, actual: " << g;
                        g = 0;
                    }
                    else if (g > 255)
                    {
                        std::cerr << "high: max: 255, actual: " << g;
                        g = 255;
                    }
                }
                if (b < 0 || b > 255) // b is out of range
                {
                    std::cerr << "Blue value too ";
                    if (b < 0)
                    {
                        std::cerr << "low: min: 0, actual: " << b;
                        b = 0;
                    }
                    else if (b > 255)
                    {
                        std::cerr << "high: max: 255, actual: " << b;
                        b = 255;
                    }
                }
                std::cerr << std::endl;
            }
            Color color(r, g, b);
            newPic.setPixel(x, y, color);
        }
        std::cout << newPic;
        file.close();
    }
    catch (const FileNotFoundException &e)
    {
        std::cerr << "File Error: " << e.what() << std::endl;
        return 1;
    }
    catch (const ColorFileFormatException &e)
    {
        std::cerr << "Format Error: " << e.what() << std::endl;
        return 1;
    }
    catch (const CoordinateOutOfRangeException &e)
    {
        std::cerr << "Coordinate Error: " << e.what() << std::endl;
    }
    catch (const ColorVectorOutOfRangeException &e)
    {
        std::cerr << "Color Range Error: " << e.what() << std::endl;
        return 1;
    }
    catch (const std::exception &e)
    {
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
