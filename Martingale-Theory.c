#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int urMoney=50;

    int number=0,
        counter=0,
        money=1;

    srand(time(NULL));

    while(money > 0){

        try:
        printf("Your money: %d\n",urMoney);
        printf("Enter amount of money: ");
        scanf("%d",&money);
        if(money>urMoney){
            printf("Entered money > Your money !!\n");
            goto try;
        } 
        urMoney-=money;

        number = rand();            
        
        if(number % 2 == 0){
            printf("------------You Win------------\n\n");
            money*=2;
            urMoney+=money; 
            printf("-------------------------------\n\n");
        }
        else 
            printf("------------You Lose------------\n\n");
        
        counter++;
        
    }
    printf("Game counter: %d\nYour final money: %d",counter,urMoney);
    return 0;
}