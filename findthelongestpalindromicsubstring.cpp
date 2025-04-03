#include <iostream>
#include <unordered_set>

using namespace std;

void expandAroundCenter(const string &s, int left, int right, unordered_set<string> &palindromes) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        palindromes.insert(s.substr(left, right - left + 1));
        left--;
        right++;
    }
}

void findAllPalindromes(const string &s) {
    unordered_set<string> palindromes;

    for (int i = 0; i < s.length(); i++) {
        // Odd-length palindromes
        expandAroundCenter(s, i, i, palindromes);
        // Even-length palindromes
        expandAroundCenter(s, i, i + 1, palindromes);
    }

    // Print all palindromes
    for (const auto &palindrome : palindromes) {
        cout << palindrome << " ";
    }
}

int main() {
    string s = "ababa";
    findAllPalindromes(s);
    // Output: a aba bab ababa b
    return 0;
}
