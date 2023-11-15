#include <iostream>
#include <string>

size_t CountLastWord(const std::string s) {
    int count = 0;
    size_t start = 0, finish = 0;
    bool foundLastWord = false;

    while ((start = s.find_first_not_of(" ", finish)) != std::string::npos) {
        finish = s.find_first_of(" ", start);
        if (finish == std::string::npos) {
            finish = s.length();
            foundLastWord = true;
        }
        if (foundLastWord) {
            for (size_t i = start; i < finish; ++i) {
                if (s[i] == 'a' || s[i] == 'A') {
                    count++;
                }
            }
        }
        start = finish + 1;
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Print letter string:" << std::endl;
    std::getline(std::cin, str);
    std::cout << "number of a: " << CountLastWord(str) << std::endl;
    return 0;
}
