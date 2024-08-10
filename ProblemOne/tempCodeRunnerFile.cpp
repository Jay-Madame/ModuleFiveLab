#include "Color.h"
#include "Color.cpp"
#include "Picture.h"
#include "Picture.cpp"
#include "exceptions.h"
#include "exceptions.cpp"
#include <iostream>

void testColor();
void testPicture();

int main()
{
    std::string fileName;
    std::cout << "Enter file name: ";
    std::cin >> fileName;
    try
    {
        std::ifstream file(fileName);
        if (!file.is_open())
        {
            throw FileNotFoundException("File not found: " + fileName);
        }

        std::string line;
        int width, length;
        std::getline(file, line);
        std::istringstream iss(line);
        if (!(iss >> width >> line))
        {
            throw ColorFileFormatException("Invalid file format: " + line);
        }
        Picture newPic(width, length);

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
                std::string errorMssg = ("Error: X or Y coordinate out of range. X: " + x);
                errorMssg += ", Y: " + y;
                throw CoordinateOutOfRangeException(errorMssg);
                continue;
            }

            if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255)
            {
                std::cerr << "Error! X: " << x << " Y: " << y
                          << " Color values out of range: R: " << r
                          << " G: " << g << " B: " << b << std::endl;
            }
            Color color(r, g, b);
            newPic.setPixel(x, y, color);
        }

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
        return 1;
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
