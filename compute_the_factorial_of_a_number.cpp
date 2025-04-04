#include <iostream>

using namespace std;

// Recursive Approach
long long factorial_recursive(int n) {
    return (n == 0) ? 1 : n * factorial_recursive(n - 1);
}

// Iterative Approach
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n = 5;
    cout << "Factorial (Recursive): " << factorial_recursive(n) << endl;
    cout << "Factorial (Iterative): " << factorial_iterative(n) << endl;
    return 0;
}
