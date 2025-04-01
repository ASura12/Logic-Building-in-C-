#include <iostream>
#include <string>

std::string replaceSpaces(std::string str) {
    std::string result;
    for (char c : str) {
        if (c == ' ')
            result += "%20";
        else
            result += c;
    }
    return result;
}

int main() {
    std::string input = "Hello World Example";
    std::string output = replaceSpaces(input);
    std::cout << "Modified String: " << output << std::endl;
    return 0;
}
