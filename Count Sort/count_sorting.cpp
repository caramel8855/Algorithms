#include <iostream>
#include <climits>
#include <cstdlib>

void printarray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}

int maximumElement(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

void countsort(int arr[], int n) {
    int max = maximumElement(arr, n);
    int *count = new int[max + 1]; // allocating memory for count array

    for (int i = 0; i <= max; i++) {
        count[i] = 0; // initializing the array elements to zeros
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++; // incrementing corresponding index in count array
    }

    // time to copy non-zero elements in the main array
    int i = 0; // counter for count array
    int j = 0; // counter for main array

    while (i <= max) {
        if (count[i] > 0) {
            arr[j] = i;
            count[i]--;
            j++;
        } else {
            i++;
        }
    }

    delete[] count; 
}

int main() {
    int size = 6;
    int array[] = {2, 67, 54, 35, 8, 4};
    printarray(array, size);
    countsort(array, size);
    std::cout << "After count sort: \n";
    printarray(array, size);

    return 0;
}
