#pragma once
#include <iostream>
#include <vector>
#include "Position.h"

class Heap {
    private:
        std::vector<Position> heap;
        int size;
        void heapifyDown(int subtree);

    public:
        Heap();
        Heap(std::vector<Position> in, int size);
        Position extract();
        void print();

};

void Heap::heapifyDown(int subtree) {
    int large = subtree;
    int left = 2*subtree+1;
    int right = 2*subtree+2; 

    if (left < size && heap[left] > heap[large]) {
        large = left;
    }
    if (right < size && heap[right] > heap[large]) {
        large = right;
    }
    if (large != subtree) {
        std::swap(heap[subtree],heap[large]);
        heapifyDown(large);
    }
}

Heap::Heap() {
    size = 0;
}

Heap::Heap(std::vector<Position> in, int size) {
    this->size = size;
    this->heap = in;

    for (int i = (size/2); i >= 0; i--) {
        heapifyDown(i);
    }
}

Position Heap::extract() {
    if (size == 0) {
        std::cerr << "Heap is empty" << std::endl;
        return Position("NULL", -1);
    }

    Position max = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    size--;
    heapifyDown(0);
    return max;
}

void Heap::print() {
    int length = size; 
    for (int i=0; i<length; i++)
    {
        Position temp = extract();
        std::cout<< temp.getName() << " "+std::to_string(temp.getPriority()) << std::endl;
        // for (Position i : heap)
        // {
        //     std::cout << i.getName() << " "+std::to_string(i.getPriority()) << std::endl;
        // }
        // std::cout << "--------------------------------------" << std::endl;
    }
}