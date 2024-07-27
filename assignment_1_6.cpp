
// --------------------------------------------------------------------------------------
// 6. Write a program to merge two sorted arrays.
// --------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
using namespace std;
// Function to merge two sorted arrays
vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
 vector<int> mergedArray;
 int i = 0, j = 0;
 // Merge elements until one of the arrays is exhausted
 while (i < arr1.size() && j < arr2.size()) {
 if (arr1[i] < arr2[j]) {
 mergedArray.push_back(arr1[i]);
 i++;
 } else {
 mergedArray.push_back(arr2[j]);
 j++;
 }
 }
 // Add remaining elements from the first array, if any
 while (i < arr1.size()) {
 mergedArray.push_back(arr1[i]);
 i++;
 }
 // Add remaining elements from the second array, if any
 while (j < arr2.size()) {
 mergedArray.push_back(arr2[j]);
 j++;
 }
 return mergedArray;
}
// Function to display an array
void displayArray(const vector<int>& arr) {
 for (int num : arr) {
 cout << num << " ";
 }
 cout << endl;
}
int main() {
 vector<int> arr1 = {1, 3, 5, 7, 9};
 vector<int> arr2 = {2, 4, 6, 8, 10};
 cout << "Array 1: ";
 displayArray(arr1);
 cout << "Array 2: ";
 displayArray(arr2);
 vector<int> mergedArray = mergeSortedArrays(arr1, arr2);
 cout << "Merged Array: ";
 displayArray(mergedArray);
 return 0;
}
