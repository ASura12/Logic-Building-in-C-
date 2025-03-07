#include <iostream>
#include <unordered_set>
using namespace std;

bool hasZeroSumSubarray(int arr[], int n) {
    unordered_set<int> prefixSumSet;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Compute prefix sum

        if (sum == 0 || prefixSumSet.find(sum) != prefixSumSet.end()) 
            return true;  // Subarray with sum 0 exists

        prefixSumSet.insert(sum);
    }
    
    return false;  // No zero-sum subarray found
}

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (hasZeroSumSubarray(arr, n))
        cout << "Subarray with sum 0 exists\n";
    else
        cout << "No subarray with sum 0 found\n";

    return 0;
}
