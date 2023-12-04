#pragma once
#include <iostream>
#include <vector>

class btreeNode
{
    int degree;
    int* keys;
    bool leaf;
    int numOfKeys;
    btreeNode **children;

    public:
        btreeNode(int degree, bool leaf);
        void traverse();

friend class btree;
};

class btree
{
    btreeNode* root;
    int degree;

    public:
        btree(int degree);
        void insert(int key);
};

btreeNode::btreeNode(int _degree, bool _leaf)
{
    degree = _degree;
    leaf = _leaf;
}

btree::btree(int _degree)
{
    degree = _degree;
}

void btree::insert(int key)
{
    if (root == nullptr)
    {
        root = new btreeNode(degree, true);
        //root->keys[0] = key;
        root->numOfKeys = 1;
    }
}


int main() 
{
    btree tree(3);
    tree.insert(10);
    std::cout << "test" << std::endl;
    return 0;
}
