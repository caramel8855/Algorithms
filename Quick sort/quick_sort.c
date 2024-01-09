#include <stdio.h>

void printarray(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;

    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        //swapping
        if(i<j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while(i<j);
    //swapping
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
 return j; 
}

void quicksort(int arr[], int low , int high){
    int partitionIndex; 
    if(low < high){
    partitionIndex = partition(arr, low, high);
    quicksort(arr, low, partitionIndex-1);
    quicksort(arr, partitionIndex+1, high);
    }
}

int main (){
    int array[] = {7,43,5,67,21,2};
    int size = 6;
    printarray(array, size);
    quicksort(array, 0 , size-1);
    printf("After quick sort : \n");
    printarray(array, size);
return 0;
}
// worst case time complexity  : O(n^2)
// best case time complexity : n log(n)
