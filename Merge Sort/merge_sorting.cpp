#include <iostream>

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void merge(int arr[], int low, int high, int mid) {
    int i, j, k;
    int arr2[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            arr2[k] = arr[i];
            i++;
            k++;
        } else {
            arr2[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid) {
        arr2[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high) {
        arr2[k] = arr[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = arr2[i];
    }
}

void mergeSort(int arr[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}

int main() {
    int size = 7;
    int array[] = {5, 6, 7, 1, 2, 3, 4};
    printArray(array, size);
    mergeSort(array, 0, 6);
    printArray(array, size);

    return 0;
}
