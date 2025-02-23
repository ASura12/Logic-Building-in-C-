#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void findPairs(vector<int>& arr, int target) {
    unordered_set<int> seen;
    
    for (int num : arr) {
        int complement = target - num;
        if (seen.find(complement) != seen.end()) {
            cout << "(" << num << ", " << complement << ")" << endl;
        }
        seen.insert(num);  // Store current number
    }
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findPairs(arr, target);
    return 0;
}
