#include <iostream>
#include <vector>

using namespace std;

// Recursive Approach (Computes nth term)
int fibonacci_recursive(int n) {
    return (n <= 1) ? n : fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Iterative Approach (Generates Fibonacci Series)
vector<int> fibonacci_iterative(int n) {
    vector<int> fib_series = {0, 1};
    for (int i = 2; i < n; i++) 
        fib_series.push_back(fib_series[i - 1] + fib_series[i - 2]);

    return fib_series;
}

int main() {
    int n = 10;
    
    cout << "Fibonacci (Recursive for nth term): " << fibonacci_recursive(n) << endl;
    
    cout << "Fibonacci Series (Iterative): ";
    vector<int> fib_series = fibonacci_iterative(n);
    for (int num : fib_series) 
        cout << num << " ";
    
    return 0;
}
