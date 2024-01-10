#include<stdio.h> 

void linearSearch(int arr[], int size, int search ){
    for(int i = 0 ; i < size; i++){
        if(arr[i] == search){
            printf("Element found! Index: %d", i);
            return;
        }
    }
    printf("The element does not exist in array.\n");
}

int main (){
    
    int array[] = {2,3,6,73,56,89,53,56,38,4,5};
    int size = 11;
    int search;
    printf("Enter a number that you wanna search: \n");
    scanf("%d", &search);
    linearSearch(array, size, search);
}