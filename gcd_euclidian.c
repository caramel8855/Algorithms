#include <stdio.h>

int EuclidGcd(int a, int b){
    
    if(b == 0){
        return a;
    }
    else{
        return EuclidGcd(b, a%b);
    }
}

int main (){
    int a, b; 
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    int GCD = EuclidGcd(a, b);
    printf("The GCD of %d and %d is: %d \n", a, b, GCD);

}