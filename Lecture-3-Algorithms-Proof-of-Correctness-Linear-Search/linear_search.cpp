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


int main() {
    std::vector<int> sequence = {1, 2, 3, 4, 5};
    int target = 5;
    linearSearch(sequence, target); // Expected return value 4
}