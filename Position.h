#pragma once
#include <string>

class Position {
    private:
        std::string name;
        int priority;
    public:
        Position();
        Position(std::string name, int priority);
        std::string getName();
        int getPriority();
        bool operator> (const Position& x);

};

Position::Position() {
    this->name = "";
    this->priority = 0;
}

Position::Position(std::string name, int priority) {
    this->name = name;
    this->priority = priority;
}

std::string Position::getName() {
    return name;
}

int Position::getPriority() {
    return priority;
}

bool Position::operator> (const Position& x) {
    return priority>(x.priority);
}