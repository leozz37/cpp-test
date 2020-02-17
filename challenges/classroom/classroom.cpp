#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void insertStudent(std::vector<std::string>& students, size_t numInput) {
    std::cin.ignore();
    while (numInput--) {
        std::string name;
        std::getline(std::cin, name);
        students.emplace_back(name);
    }
    std::sort(students.begin(), students.end());
}

void consultStudent(std::vector<std::string>& students, size_t numInput) {
    while (numInput--) {
        int index = 0;
        std::cin >> index;
        std::cout << students.at(index - 1) << "\n";
    }
}

int main(int argc, char** argv) {
    int numQueries = 0;
    std::cin >> numQueries;
    std::vector<std::string> students;

    while (numQueries--) {
        int queryType = 0;
        std::cin >> queryType;

        int numInput = 0;
        std::cin >> numInput;

        (queryType == 1) ? insertStudent(students, numInput) : consultStudent(students, numInput);
    }
    return 0;
}
