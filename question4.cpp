#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
    cout << "Reversed array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void findMaxMin(const vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());
    int minElement = *min_element(arr.begin(), arr.end());

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;
}

void displayArray(const vector<int>& arr) {
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    const int size = 10;
    vector<int> arr(size);

    cout << "Enter 10 integers to populate the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Reverse the array\n";
        cout << "2. Check if the array is sorted in ascending order\n";
        cout << "3. Find the maximum and minimum elements\n";
        cout << "4. Display the original array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                reverseArray(arr);
                break;
            case 2:
                if (isSorted(arr)) {
                    cout << "The array is sorted in ascending order." << endl;
                } else {
                    cout << "The array is not sorted in ascending order." << endl;
                }
                break;
            case 3:
                findMaxMin(arr);
                break;
            case 4:
                displayArray(arr);
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
