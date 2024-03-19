#include<stdio.h>

void minimumcoins(int coin[], int n, int amount){
   for(int i = (n-1); i>=0 ; i--){
        while(amount>=coin[i]){
            printf("%d\n", coin[i]);
            amount = amount - coin[i];
    }
    }
}

int main (){
    int coin[] = {1, 2 ,5,10,20,50,100,200,500,100};
    int numofcoins = sizeof(coin)/sizeof(coin[0]);

    int amount;
    scanf("%d", &amount);
    printf("The minimum number of coins needed to make %d is: \n", amount);
    minimumcoins(coin, numofcoins, amount);

return 0;
}
