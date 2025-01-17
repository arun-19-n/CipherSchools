/*Question - 02
Write a C++ program that computes the
n
nth Fibonacci number using recursion. Then, illustrate the recursion tree method by providing 
a brief explanation of how the recursion tree grows and how to calculate the time complexity.
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}

