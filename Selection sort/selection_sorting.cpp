#include <iostream>

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}

void selectionsort(int arr[], int n) {
    int IndexMin, temp;
    for (int i = 0; i < (n - 1); i++) {
        IndexMin = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[IndexMin]) {
                IndexMin = j;
            }
        }
        //Swapping
        temp = arr[i];
        arr[i] = arr[IndexMin];
        arr[IndexMin] = temp;
    }
}

int main() {
    int array[] = {2, 56, 48, 5, 34, 3};
    int size = 6;
    printarray(array, size);
    selectionsort(array, size);
    std::cout << "After selection sort: \n";
    printarray(array, size);
}

// In this sort:
// Total passes   : n-1
// Time complexity : O(n^2)
// Stable? : No
// Adaptive? : No
