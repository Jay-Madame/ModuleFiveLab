#include "Picture.h"
#include <ostream>

Picture::Picture(int w, int h) : width(w), height(h)
{
    colors.resize(width, std::vector<Color>(height, Color(255, 255, 255)));
}

void Picture::setPixel(int x, int y, Color color)
{
    colors[x][y] = color;
}

int Picture::getHeight() const
{
    return height;
}

int Picture::getWidth() const
{
    return width;
}

std::ostream &operator<<(std::ostream &strm, const Picture &obj)
{
    for (const auto &row : obj.colors)
    {
        for (const auto &pixel : row)
        {
            strm << pixel << ' ';
        }
        strm << std::endl;
    }
    return strm;
}
