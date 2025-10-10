#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to print array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to get the maximum element from array
int getMax(const vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to get the digit at a specific position
int getDigit(int num, int position) {
    return (num / (int)pow(10, position)) % 10;
}

// Function to get the number of digits in a number
int getDigitCount(int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Radix Sort implementation
void radixSort(vector<int>& arr) {
    if (arr.empty()) return;
    
    // Find the maximum number to know number of digits
    int max = getMax(arr);
    int maxDigits = getDigitCount(max);
    
    // Create 10 buckets (0-9)
    vector<vector<int>> buckets(10);
    
    // Process each digit position
    for (int pos = 0; pos < maxDigits; pos++) {
        // Clear buckets
        for (int i = 0; i < 10; i++) {
            buckets[i].clear();
        }
        
        // Distribute elements into buckets based on current digit
        for (int i = 0; i < arr.size(); i++) {
            int digit = getDigit(arr[i], pos);
            buckets[digit].push_back(arr[i]);
        }
        
        // Collect elements back from buckets
        int index = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < buckets[i].size(); j++) {
                arr[index++] = buckets[i][j];
            }
        }
        
        // Display intermediate step
        cout << "After processing digit position " << pos << ": ";
        printArray(arr);
    }
}

// Alternative implementation using counting sort for each digit
void radixSortCounting(vector<int>& arr) {
    if (arr.empty()) return;
    
    int max = getMax(arr);
    int maxDigits = getDigitCount(max);
    
    for (int pos = 0; pos < maxDigits; pos++) {
        // Count occurrences of each digit
        vector<int> count(10, 0);
        vector<int> output(arr.size());
        
        // Count occurrences
        for (int i = 0; i < arr.size(); i++) {
            int digit = getDigit(arr[i], pos);
            count[digit]++;
        }
        
        // Modify count to store actual position
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }
        
        // Build output array
        for (int i = arr.size() - 1; i >= 0; i--) {
            int digit = getDigit(arr[i], pos);
            output[count[digit] - 1] = arr[i];
            count[digit]--;
        }
        
        // Copy output back to original array
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = output[i];
        }
        
        cout << "After processing digit position " << pos << ": ";
        printArray(arr);
    }
}

int main() {
    cout << "Radix Sort Implementation in C++" << endl;
    cout << "=================================" << endl;
    
    // Test cases
    vector<int> arr1 = {170, 45, 75, 90, 2, 802, 24, 66};
    vector<int> arr2 = {329, 457, 657, 839, 436, 720, 355};
    vector<int> arr3 = {1, 10, 100, 1000, 10000};
    vector<int> arr4 = {999, 888, 777, 666, 555};
    
    // Test Case 1 - Mixed numbers
    cout << "\nTest Case 1 (Mixed numbers):" << endl;
    cout << "Original array: ";
    printArray(arr1);
    cout << "Sorting process:" << endl;
    radixSort(arr1);
    cout << "Final sorted array: ";
    printArray(arr1);
    
    // Test Case 2 - Three-digit numbers
    cout << "\nTest Case 2 (Three-digit numbers):" << endl;
    cout << "Original array: ";
    printArray(arr2);
    cout << "Sorting process:" << endl;
    radixSort(arr2);
    cout << "Final sorted array: ";
    printArray(arr2);
    
    // Test Case 3 - Powers of 10
    cout << "\nTest Case 3 (Powers of 10):" << endl;
    cout << "Original array: ";
    printArray(arr3);
    cout << "Sorting process:" << endl;
    radixSort(arr3);
    cout << "Final sorted array: ";
    printArray(arr3);
    
    // Test Case 4 - Descending order
    cout << "\nTest Case 4 (Descending order):" << endl;
    cout << "Original array: ";
    printArray(arr4);
    cout << "Sorting process:" << endl;
    radixSort(arr4);
    cout << "Final sorted array: ";
    printArray(arr4);
    
    // Interactive test
    cout << "\nEnter your own array (space-separated positive integers):" << endl;
    vector<int> userArr;
    int num;
    while (cin >> num) {
        if (num < 0) {
            cout << "Note: Radix sort works best with non-negative integers. Converting to positive..." << endl;
            num = abs(num);
        }
        userArr.push_back(num);
    }
    
    if (!userArr.empty()) {
        cout << "\nYour original array: ";
        printArray(userArr);
        cout << "Sorting process:" << endl;
        radixSort(userArr);
        cout << "Your sorted array: ";
        printArray(userArr);
    }
    
    cout << "\nAlgorithm Analysis:" << endl;
    cout << "Time Complexity: O(d * n) where d is the number of digits" << endl;
    cout << "Space Complexity: O(n + k) where k is the range of input" << endl;
    cout << "Stable: Yes" << endl;
    cout << "Best for: Non-negative integers with a limited range" << endl;
    
    return 0;
}


