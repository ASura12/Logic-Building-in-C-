#include <iostream>
#include <unordered_map>
using namespace std;

void count_frequency(string &str) {
    unordered_map<char, int> freq;

    // Count occurrences of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Display character frequencies
    cout << "\nCharacter Frequencies:\n";
    for (auto it : freq) {
        cout << " '" << it.first << "' -> " << it.second << endl;
    }
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    count_frequency(str);

    return 0;
}
