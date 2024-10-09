#include <stdio.h>
int main(){
    int i, n, coin, running, decision;
    char close;
    coin = 800;
    running = 1;
    while (running){
        printf("You have %d coin.\n",coin);
        for (i = 0 ; coin>10000*i ; i++){
            if (coin<10000*(i+1)){
                printf("You could withdraw %d, you could withdraw 10.000 and its multipliers.\n",10000*i);
            }
        }
        if (i == 1 || i == 0){
            printf("You don't have enough money to withdraw.");
            break;
        }
        printf("Choose 10.000 multiplier you want to withdraw.\n");
        if (scanf("%d", &decision) == 1){
            if (decision >=0){
                if (decision < i){
                    coin -= decision*10000;
                    printf("You withdraw %d, now you have %d.\n", 10000*decision,coin);
                } else{
                    printf("Please choose one of the valid number, you entered %d but you could choose equal and below %d\n", decision,i);
                }
            } else {
                printf("Choose positive number.\n");
            }
        } else{
            printf("You entered char, please write y/Y to close this app\n");
            scanf("%c",&close);
            if (close == 'y' || close == 'Y'){
                return 1;
            } else{
                printf("You continue this app.\n");
            }
        }
    }
}