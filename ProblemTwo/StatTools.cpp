#include "StatTools.h"

template <class T>
T StatTools<T>::max(T *arr, int size)
{
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <class T>
T StatTools<T>::min(T *arr, int size)
{
    T minVal = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    return minVal;
}

template <class T>
T StatTools<T>::mean(T *arr, int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

template <class T>
T StatTools<T>::mode(T *arr, int size)
{
    T *sortedArr = new T[size];
    std::copy(arr, arr + size, sortedArr);
    std::sort(sortedArr, sortedArr + size);

    T mode = sortedArr[0];
    int maxCount = 1, currentCount = 1;

    for (int i = 1; i < size; ++i)
    {
        if (sortedArr[i] == sortedArr[i - 1])
        {
            currentCount++;
        }
        else
        {
            if (currentCount > maxCount)
            {
                maxCount = currentCount;
                mode = sortedArr[i - 1];
            }
            currentCount = 1;
        }
    }

    if (currentCount > maxCount)
    {
        mode = sortedArr[size - 1];
    }

    delete[] sortedArr;
    return mode;
}

template <class T>
T StatTools<T>::median(T *arr, int size)
{
    std::sort(arr, arr + size);
    if (size % 2 == 0)
    {
        return static_cast<T>((arr[size / 2 - 1] + arr[size / 2]) / 2.0);
    }
    else
    {
        return arr[size / 2];
    }
}

template <class T>
void StatTools<T>::stemAndLeafPlot(T *arr, int size)
{
    std::cout << "Stem and Leaf Plot:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] / 10 << " | " << static_cast<T>(static_cast<int>((arr[i]) )% 10 )<< std::endl;
    }
}

template <class T>
void StatTools<T>::barChart(T *arr, int size)
{
    std::cout << "Bar Chart:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ": ";
        for (int j = 0; j < arr[i]; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
