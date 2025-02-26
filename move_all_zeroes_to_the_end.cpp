#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int nonZeroIndex = 0;  // Pointer for non-zero elements

    // Move all non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZerosToEnd(arr);

    cout << "Array after moving zeros: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
