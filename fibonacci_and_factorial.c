#include<stdio.h>

int fact(int n){
   if(n ==1 || n ==0){
    return 1;
   }
   else {
    return  n * fact(n-1);
   }
   
}
// 0 1 1 2 3 5 8
int fibonacci(int n){
 if(n==1){
    return 1;
    }  
    else if(n == 0){
        return 0;
    } else {
    return fibonacci(n-1)+fibonacci(n-2);
 }
}

int main (){
    int n; 
    printf("Enter the value of n : \n");
    scanf("%d", &n);
   //call functions to apply now
}