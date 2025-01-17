/* Question - 01
Write a program that accepts a list of integers and calculates the sum of the integers using different approaches to illustrate the growth of functions. Specifically, implement the following:

Naive Approach: Use a simple loop to calculate the sum of the list.
Recursive Approach: Write a recursive function to calculate the sum of the list.
Using Built-in Functions: Use built-in sum() function to calculate the sum.
*/ 

#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

// Naive Approach: Using a simple loop
int naive_sum(const vector<int>& int_list) {
    int total = 0;
    for (int num : int_list) {
        total += num;
    }
    return total;
}

// Recursive Approach
int recursive_sum(const vector<int>& int_list, int index = 0) {
    if (index == int_list.size()) {
        return 0;
    }
    return int_list[index] + recursive_sum(int_list, index + 1);
}

// Built-in Function Approach
int builtin_sum(const vector<int>& int_list) {
    return accumulate(int_list.begin(), int_list.end(), 0);
}

int main() {
    vector<int> numbers = vector<int>{1, 2, 3, 4, 5};
    cout << "Naive Approach Sum: " << naive_sum(numbers) << endl;
    cout << "Recursive Approach Sum: " << recursive_sum(numbers) << endl;
    cout << "Built-in Function Sum: " << builtin_sum(numbers) << endl;

    return 0;
}

