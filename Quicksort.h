#include <iostream>
#include <vector>
#include "Position.h"

void swap(Position *a, Position *b)
{
    Position t = *a;
    *a = *b;
    *b = t;
}

int partition(std::vector<Position> &vtr, int low, int high)
{
    int pivot = vtr[low].getPriority();
    int up = low, down = high;

    while (up < down)
    {
        for (int j = up; j < high; j++)
        {
            if (vtr[up].getPriority() > pivot)
                break;
            up++;
        }
        for (int j = high; j > low; j--)
        {
            if (vtr[down].getPriority() < pivot)
                break;
            down--;
        }
        if (up < down)
            swap(&vtr[up], &vtr[down]);
    }
    swap(&vtr[low], &vtr[down]);
    return down;
}

void quickSort(std::vector<Position> &vtr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(vtr, low, high);
        quickSort(vtr, low, pivot-1);
        quickSort(vtr, pivot+1, high);
    }
}

void printData(std::vector<Position> &vtr, int size)
{
    for (int i=0; i<size; i++)
    {
        std::cout << vtr[i].getName() << " " << std::to_string(vtr[i].getPriority()) << std::endl;
    }
}
