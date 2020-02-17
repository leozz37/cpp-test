#include <iostream>
#include <string>

int main(int argc, char** argv) {
    int numInputs = 0, billNumber, dirtyBills = 0;
    std::string billType;
    std::cin >> numInputs;
    
    while (numInputs--) {
        std::cin >> billNumber;
        std::cin >> billType;
        if (billType == "dirty")
            dirtyBills += billNumber;
    }

    (dirtyBills > 0) ? std::cout << "There are " << dirtyBills << " dirty bills."
                     : std::cout << "There are no dirty bills.";
}
