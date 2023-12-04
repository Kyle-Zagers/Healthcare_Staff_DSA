#include <iostream>
#include <string>
#include "Position.h"
#include "Heap.h"

void menu(){
    std::cout << "Main Menu:" << std:: endl;
    std::cout << "1. input available nurses" << std::endl;
    std::cout << "2. Show list of available positions" << std::endl;
    std::cout << "3. Show priority of position" << std::endl;
    std::cout << "4. Show list of nursing assignments" << std::endl;
    std::cout << "5. Reset list of available nurses" << std::endl;
    std::cout << "6. Stop Execution" << std::endl;

}


int main() {
    // bool run = true;
    // while (run) {
    //     int x;
    //     menu();
    //     std::cin >> x;
    //     switch (x) {
    //         case 1:
    //             break;
    //         case 2:
    //             break;
    //         case 3:
    //             break;
    //         case 4:
    //             break;
    //         case 5:
    //             break;
    //         case 6:
    //             run = false;
    //             break;
    //         default:
    //             std::cout << "Invalid Input, please input valid menu selection" << std::endl;
    //     }
    // }

    std::vector<Position> in;
    for (int i=0; i<10; i++)
    {
        in.push_back(Position("help"+std::to_string(i), rand()));
    }
    Heap res(in, 10);
    res.print();
    std::cout << std::endl;
    res.insert(Position("kyle", 20000));
    res.print();

    return 0;
}
