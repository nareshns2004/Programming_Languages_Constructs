#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to print array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Bubble Sort implementation
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    
    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false; // Optimization: check if any swap occurred
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // If current element is greater than next element, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no swapping occurred in inner loop, array is sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    // Test the bubble sort with different arrays
    vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};
    vector<int> arr2 = {5, 2, 8, 1, 9};
    vector<int> arr3 = {1}; // Single element
    vector<int> arr4 = {3, 1, 4, 1, 5, 9, 2, 6}; // With duplicates
    
    cout << "Bubble Sort Implementation in C++" << endl;
    cout << "=================================" << endl;
    
    // Test case 1
    cout << "\nTest Case 1:" << endl;
    cout << "Original array: ";
    printArray(arr1);
    bubbleSort(arr1);
    cout << "Sorted array:   ";
    printArray(arr1);
    
    // Test case 2
    cout << "\nTest Case 2:" << endl;
    cout << "Original array: ";
    printArray(arr2);
    bubbleSort(arr2);
    cout << "Sorted array:   ";
    printArray(arr2);
    
    // Test case 3 - Single element
    cout << "\nTest Case 3 (Single element):" << endl;
    cout << "Original array: ";
    printArray(arr3);
    bubbleSort(arr3);
    cout << "Sorted array:   ";
    printArray(arr3);
    
    // Test case 4 - With duplicates
    cout << "\nTest Case 4 (With duplicates):" << endl;
    cout << "Original array: ";
    printArray(arr4);
    bubbleSort(arr4);
    cout << "Sorted array:   ";
    printArray(arr4);
    
    // Interactive test
    cout << "\nEnter your own array (space-separated integers, press Enter when done):" << endl;
    vector<int> userArr;
    int num;
    while (cin >> num) {
        userArr.push_back(num);
    }
    
    if (!userArr.empty()) {
        cout << "Your original array: ";
        printArray(userArr);
        bubbleSort(userArr);
        cout << "Your sorted array:   ";
        printArray(userArr);
    }
    
    return 0;
}


