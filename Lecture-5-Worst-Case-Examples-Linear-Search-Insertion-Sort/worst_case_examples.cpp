#include <iostream>
#include <vector>

int linearSearch(std::vector<int> inputSequence, int target) {
    /*
    Iterates through entire sequence and search an element.
    If element in sequence, return it's corresponding index,
    vice versa returns -1.
    Time Complexity O(N)
    Memory Complexity O(1)
    */
    for (int i = 0; i < inputSequence.size(); ++i) {
        if (inputSequence[i] == target) {
            return i;
        }
    }
    return -1;
}


std::vector<int> insertionSort(std::vector<int> array) {
    /*
    Implementation of insertion sort.
    Sorts array in non-decreasing order.
    Time Complexity O(N^2)
    Memory Complexity O(N)
    */
    int n = array.size();
    for (int i = 1; i < n; ++i) {
        int x = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > x) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = x;
    }
    return array;
}


int main() {
    std::vector<int> sequence = {1, 2, 3, 4, 5};
    int target = 6;
    linearSearch(sequence, target); // Worst case when element not in sequence

    std::vector<int> reverseSequence = {5, 4, 3, 2, 1};
    insertionSort(reverseSequence); // Worst case when input sequence in the non-increasing order.
}