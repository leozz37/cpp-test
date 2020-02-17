#include <algorithm>
#include <iostream>
#include <string>

bool isPalindrome(std::string word) {
    std::string reverse = word;
    std::reverse(reverse.begin(), reverse.end());
    return reverse == word;
}

int main(int argc, char** argv)
{
    int numWords = 0;
    std::cin >> numWords;

    while (numWords--) {
        std::string word;
        std::cin >> word;

        isPalindrome(word) ? std::cout << word << " is palindrome\n"
                           : std::cout << word << " is not palindrome\n";
    }

    return 0;
}
