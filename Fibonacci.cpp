#include <iostream>
using namespace std;

// Fungsi rekursif Fibonacci
int fibonacci(int n) {
    // Base case
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 45;

    cout << "\nDeret Fibonacci:\n";
    for (int i = 0; i <= n; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
