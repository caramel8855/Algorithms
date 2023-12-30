#include<iostream>

using namespace std;

void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void insertionsort(int arr[], int n) {
    int key, j;
    for(int i = 1; i <= (n - 1); i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {  // arr[j] < key for descending order
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int size = 6;
    int array[] = {2, 67, 54, 35, 8, 4};

    printarray(array, size);
    insertionsort(array, size);
    cout << "After insertion sort:\n";
    printarray(array, size);

    return 0;
}

//in this sort:
//total passes   : n-1
//time comp : O(n^2)
//in best case : O(n)
//stable? : Yes
//Adaptive? :Yes 

