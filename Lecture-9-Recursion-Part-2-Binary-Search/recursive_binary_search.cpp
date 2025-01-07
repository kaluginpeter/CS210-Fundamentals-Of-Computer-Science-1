#include <iostream>
#include <vector>


bool partition(std::vector<int>& arr, int& target, int left, int right) {
    if (left > right) {
        return false;
    }
    int middle = left + (right - left) / 2;
    if (arr[middle] == target) {
        return true;
    } else if (arr[middle] > target) {
        return partition(arr, target, left, middle - 1);
    }
    return partition(arr, target, middle + 1, right);
}


bool recursiveBinarySearch(std::vector<int>& arr, int& target) {
    /*
    Recursive implementation of binary search.
    Search through entire array and returns boolean true or false
    if element exist in array.
    Time Complexity O(log(N))
    Memory Complexity O(log(N))
    */
    int right = arr.size() - 1;
    int left = 0;
    return partition(arr, target, left, right);
}


int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;
    recursiveBinarySearch(arr, target); // output should be true
}