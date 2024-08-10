#include "StatTools.h"
#include "StatTools.cpp"

#include <iostream>

template class StatTools<int>;
template class StatTools<float>;
template class StatTools<double>;

template <class T>
void testingStats(T *arr, int size, std::string type)
{
    StatTools<T> newStats;
    std::cout << type << " Array:\n";
    std::cout << "Max: " << newStats.max(arr, size) << std::endl;
    std::cout << "Min: " << newStats.min(arr, size) << std::endl;
    std::cout << "Mean: " << newStats.mean(arr, size) << std::endl;
    std::cout << "Mode: " << newStats.mode(arr, size) << std::endl;
    std::cout << "Median: " << newStats.median(arr, size) << std::endl;
    newStats.stemAndLeafPlot(arr, size);
    newStats.barChart(arr, size);
    std::cout << std::endl;
}

int main()
{
    // int
    int intArr[] = {3, 6, 2, 8, 4, 9, 7};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    testingStats(intArr, intSize, "Int");

    // float
    float floatArr[] = {3.5f, 6.1f, 2.8f, 8.4f, 4.0f, 9.9f, 7.3f};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    testingStats(floatArr, floatSize, "Float");

    // double
    double doubleArr[] = {3.55, 6.15, 2.85, 8.45, 4.05, 9.95, 7.35};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    testingStats(doubleArr, doubleSize, "Double");

    return 0;
}