#include <iostream>

using namespace std;

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void bubblesort(int arr[], int n) {
    int temp;
    for (int i = 0; i < (n - 1); i++) {
        cout << "pass required to sort " << i + 1 << endl;
        for (int j = 0; j < (n - 1 - i); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Best performance
void bubblesortpro(int arr[], int n) {
    int is_sorted = 0;
    int temp;
    for (int i = 0; i < (n - 1); i++) {
        cout << "pass required to sort " << i + 1 << endl;
        is_sorted = 1;
        for (int j = 0; j < (n - 1 - i); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_sorted = 0;
            }
        }
        if (is_sorted) {
            return;
        }
    }
}

int main() {
    int size = 6;
    int array[] = {3, 4, 12, 86, 23, 85};
    printarr(array, size); // print elements before the sorting
    bubblesort(array, size);
    // bubblesortpro(array, size); // use this for fewer passes required
    cout << "The sorted array :" << endl;
    printarr(array, size); // print after the sorting
    return 0;
}
