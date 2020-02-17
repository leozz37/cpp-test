#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char** argv) {
    int numNumbers = 0, number;
    std::cin >> numNumbers;

    std::vector<int> numbers;
    while (numNumbers--) {
        std::cin >> number;
        numbers.push_back(number);
    }

    std::sort(numbers.begin(), numbers.end());
    for (auto& num : numbers) {
        std::cout << num << "\n";
    }
}