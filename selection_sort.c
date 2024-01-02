#include <stdio.h>

void printarray(int arr[], int n){
    for(int i = 0; i < n ; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void selectionsort(int arr[], int n){
    int IndexMin, temp;
    for(int i = 0 ; i < (n-1); i++){
        IndexMin = i;
        for(int j = i+1; j < n ; j++){
            if(arr[j]<arr[IndexMin]){
                IndexMin = j;
            }
        }
            //swaping
            temp = arr[i];
            arr[i] = arr[IndexMin];
            arr[IndexMin] = temp;
    }
}

int main (){
    int array[] = {2,56,48,5,34,3};
    int size = 6;
    printarray(array, size);
    selectionsort(array, size);
    printf("After selection sort: \n");
    printarray(array, size);
}

//in this sort:
//total passes   : n-1
//time comp : O(n^2)
//stable? : No
//Adaptive? :No 