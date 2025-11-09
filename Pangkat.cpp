#include <iostream>
using namespace std;

// Fungsi rekursif sederhana menghitung x^n
double pangkat(int x, int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    
    // Recursive case
    return x * pangkat(x, n - 1);
}

int main() {
    int x = 2, n = 5;
    cout << x << "^" << n << " = " << pangkat(x, n) << endl;
    return 0;
}