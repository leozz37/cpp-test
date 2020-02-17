#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string setPerson(std::string payload) {
    const size_t numFields = 5;
    std::istringstream iss(payload);
    std::vector<std::string> fields;

    for (int i = 0; i < numFields; i++) {
        const size_t index = payload.find(',');
        const std::string field = payload.substr(0, index);
        payload.erase(0, field.length() + 1);
        fields.push_back(field);
    }
    
    return fields[0] + " is " + fields[4] + " years old and lives in " + fields[2] + ", " + fields[1] + ".\n";
};


int main(int argc, char** argv) {
    int numPersons = 0;
    std::cin >> numPersons;
    std::cin.ignore();

    while (numPersons--) {
        char input[100];
        std::cin.getline(input, sizeof(input));
        std::cout << setPerson(input);
    }
    return 0;
}
