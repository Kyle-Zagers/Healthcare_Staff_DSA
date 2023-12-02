#include <iostream>
#include <string>

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
    while (true) {
        int x;
        menu();
        std::cin >> x;
        if (x == 1) {

        }
        else if (x == 2){

        }
        else if (x == 3){

        }
        else if (x == 4){

        }
        else if (x == 5) {

        }
        else if (x == 6) {
            break;
        }
        else{
            std::cout << "Invalid Input, please input valid menu selection" << std::endl;
        }
    }


    return 0;
}
