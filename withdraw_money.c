#include <stdio.h>

int main(){
    int i, n, coin, running, decision;
    coin = 2314232;
    running = 1;
    while (running){
        printf("You have %d coin.\n",coin);
        for (i = 0 ; coin>10000*i ; i++){
            if (coin<10000*(i+1)){
                printf("You could withdraw %d, you could withdraw 10.000 and its multipliers.\n",10000*i);
            }
        }
        printf("Choose 10.000 multiplier you want to withdraw.\n");
        scanf("%d", &decision);
        if (decision >=0){
            if (decision < i){
                coin -= decision*10000;
                printf("You withdraw %d, now you have %d.\n", 10000*decision,coin);
            } else{
                printf("Please choose one of the valid number, you entered %d but you could choose below %d\n", decision,i);
            }
        } else {
            printf("Choose positive number.\n");
        }
    }
}