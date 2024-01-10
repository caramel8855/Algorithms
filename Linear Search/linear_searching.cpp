#include <iostream>

using namespace std;

void linearSearch(int arr[], int size, int search) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            cout << "Element found! Index: " << i << endl;
            return;
        }
    }
    cout << "The element does not exist in array." << endl;
}

int main() {
    int array[] = {2, 3, 6, 73, 56, 89, 53, 56, 38, 4, 5};
    int size = 11;
    int search;

    cout << "Enter a number that you wanna search: " << endl;
    cin >> search;

    linearSearch(array, size, search);

    return 0;
}
