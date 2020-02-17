#include <algorithm>
#include <iostream>
#include <string>

bool isAnagram(std::string firstWord, std::string secondWord) {
    if (firstWord.size() != secondWord.size())
        return false;
    
    std::sort(firstWord.begin(), firstWord.end());
    std::sort(secondWord.begin(), secondWord.end());
    return firstWord == secondWord;
}

int main(int argc, char** argv) {
    int numWords = 0;
    std::cin >> numWords;
    std::string firstWord;
    std::string secondWord;

    while (numWords--) {
        std::cin >> firstWord;
        std::cin >> secondWord;
        
        isAnagram(firstWord, secondWord)
                 ? std::cout << firstWord << " is an anagram of " << secondWord << "\n"
                 : std::cout << firstWord << " is not an anagram of " << secondWord << "\n";
    }
    return 0;
}
