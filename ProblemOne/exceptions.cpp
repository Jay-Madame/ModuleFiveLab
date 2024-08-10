#include "exceptions.h"
#include <iostream>
#include <fstream>
#include <sstream>

FileNotFoundException::FileNotFoundException(const std::string &message)
    : std::runtime_error(message) {}

ColorFileFormatException::ColorFileFormatException(const std::string &message)
    : std::runtime_error(message) {}

CoordinateOutOfRangeException::CoordinateOutOfRangeException(const std::string &message)
    : std::runtime_error(message) {}

ColorVectorOutOfRangeException::ColorVectorOutOfRangeException(const std::string &message)
    : std::runtime_error(message) {}
