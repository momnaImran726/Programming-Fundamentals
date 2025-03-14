#include <iostream>
using namespace std;

// Recursive function to calculate sum of first n natural numbers
int Sum(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + Sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate the sum using the recursive function
    int result = Sum(n);

    // Output the result
    cout << "The sum of the first " << n << " natural numbers is: " << result << endl;

    return 0;
}
