#pragma once
#include "Picture.h"
#include <stdexcept>
#include <string>

// file not found
class FileNotFoundException : public std::runtime_error
{
public:
    explicit FileNotFoundException(const std::string &message)
        : std::runtime_error(message) {}
};

// format
class ColorFileFormatException : public std::runtime_error
{
public:
    explicit ColorFileFormatException(const std::string &message)
        : std::runtime_error(message) {}
};

// coord out of range
class CoordinateOutOfRangeException : public std::runtime_error
{
public:
    explicit CoordinateOutOfRangeException(const std::string &message)
        : std::runtime_error(message) {}
};

// color val out of range
class ColorVectorOutOfRangeException : public std::runtime_error
{
public:
    explicit ColorVectorOutOfRangeException(const std::string &message)
        : std::runtime_error(message) {}
};