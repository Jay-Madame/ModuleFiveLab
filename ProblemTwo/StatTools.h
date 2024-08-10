/*
[ ] Modify StatTools from Module Three so it will
    take arrays of any integer or floating point
    values using **templates**.
    Demonstrate your solution in a main.cpp <br>
*/

#pragma once
#include <iostream>
#include <algorithm>
#include <cmath>

template <class T>
class StatTools
{
public:
    static T max(T *arr, int size);
    static T min(T *arr, int size);
    static T mean(T *arr, int size);
    static T mode(T *arr, int size);
    static T median(T *arr, int size);
    static void stemAndLeafPlot(T *arr, int size);
    static void barChart(T *arr, int size);
};