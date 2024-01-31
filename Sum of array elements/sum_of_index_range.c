//sum elements accoding to index range 
//with n time complexity

#include<stdio.h>
void printarray(int arr[], int n){
    for(int i = 0 ; i < n ;i++){
        printf("%d\t", arr[i]);
    }
}

int sumofrange(int arr[], int l, int r){
    int sum ;
    sum = arr[r] - arr[l-1];
    return sum;    
}

int main(){
    int size = 5;
    int array[5];
    for(int i = 0; i < size; i ++){
        if(i == 0){
             scanf("%d", &array[i]);
        } else{
            scanf("%d", &array[i]);
            array[i] = array[i]+array[i-1];
        }
    }

    int l, r; 
    printf("Give the range: ");
    scanf("%d %d", &l , &r);

    int sum = sumofrange(array, l, r);
    printf("%d", sum);
}         
