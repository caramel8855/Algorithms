#include <stdio.h>
#include <limits.h> //just header file to use INT_MAX or INT_MIN
#include <stdlib.h> //for malloc function  

void printarray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int maximumElement(int arr[], int n){
    int max  =  INT_MIN;
    for(int i = 0 ; i < n; i ++){
        if(max< arr[i]){
            max  = arr[i];
        }
    }
    return max;
}

void countsort(int arr[], int n) {
    int max = maximumElement(arr, n);
    int *count = (int *)malloc((max + 1) * sizeof(int)); // allocating memory for count array
    
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

    free(count); 
}

int main (){
    int size = 6;
    int array[] = {2,67,54,35,8,4};
    printarray(array, size);
    countsort(array, size);
    printf("After count sort: \n");
    printarray(array, size);
}

//in this sort : 
//time complexity : O(m+n) ~ O(n)  [best]
//it's disadvantage : Extra space
