#include <iostream>
#include <string>

int main(int argc, char** argv) {
    int numStairs = 0;
    std::cin >> numStairs;

    if (numStairs <= 0) {
        std::cout << "Error.\n";
        return 0;
    }

    std::string stair (numStairs, ' ');
    for (int i = 1; i <= numStairs; i++) {
        stair[numStairs - i] = '#';
        std::cout << stair << "\n";
    }

    return 0;
}