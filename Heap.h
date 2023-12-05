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
        void insert(Position in);
        int getSize();

};

void Heap::heapifyDown(int subtree) {
    int large = subtree;
    int left = 2*subtree+1;
    int right = 2*subtree+2; 

    if (left < size && heap[large] > heap[left]) {
        large = left;
    }
    if (right < size && heap[large] > heap[right]) {
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
    std::vector<Position> tHeap = heap;
    int tSize = size;

    for (int i=0; i<tSize; i++)
    {
        Position temp = extract();
        std::cout<< temp.getName() << " "+std::to_string(temp.getPriority()) << std::endl;
    }

    heap = tHeap;
    size = tSize;
}

void Heap::insert(Position in) {
    heap.push_back(in);
    size++;
    int lastIndex = size - 1;
    while(lastIndex > 0) {
        int parentIndex = (lastIndex - 1) / 2;
        if (heap[parentIndex] > heap[lastIndex]) {
            std::swap(heap[lastIndex], heap[parentIndex]);
            lastIndex = parentIndex;
        }
        else {break;}
    }
}

int Heap::getSize() {
    return size;
}
