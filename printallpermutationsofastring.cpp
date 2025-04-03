#include <iostream>
#include <algorithm>

using namespace std;

void permute(string s, int l, int r) {
    if (l == r)
        cout << s << " ";
    else {
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);  // Swap
            permute(s, l + 1, r);
            swap(s[l], s[i]);  // Backtrack
        }
    }
}

int main() {
    string s = "abc";
    permute(s, 0, s.length() - 1);
    return 0;
}
