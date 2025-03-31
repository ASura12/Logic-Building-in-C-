#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string longestCommonPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";
    
    std::sort(strs.begin(), strs.end());
    std::string first = strs.front(), last = strs.back();
    int i = 0;
    while (i < first.size() && first[i] == last[i]) {
        i++;
    }
    return first.substr(0, i);
}

int main() {
    int n;
    std::cout << "Enter number of strings: ";
    std::cin >> n;
    std::vector<std::string> strs(n);
    
    std::cout << "Enter strings:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> strs[i];
    }
    
    std::string result = longestCommonPrefix(strs);
    std::cout << "Longest Common Prefix: " << result << std::endl;
    
    return 0;
}
