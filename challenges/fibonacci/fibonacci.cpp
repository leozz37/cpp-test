#include <iostream>

long long fibonacci(int num) {
    if (num < 2)
        return num;

    long long last = 0, current = 1, aux;
    
    for (int i = 1; i < num; i++) {
        aux = last;
        last = current;
        current += aux;
    }

    return current;
}

int main(int argc, char** argv){
    int num = 0;
    std::cin >> num;
    std::cout << fibonacci(num);
}