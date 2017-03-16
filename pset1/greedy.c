#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float change = 0.0;
    int intChange = 0, coins = 0;


    printf("O hai! ");
    do
    {
        printf("How much change is owed?\n");
        change = round(GetFloat() * 100);
    }while(change < 0);

    intChange = (int) change;

    while(true)
    {
        if (intChange == 25 || intChange == 10 || intChange == 5 || intChange == 1){
            coins = coins + 1;
            break;
        }else if(intChange > 25){
            coins = coins + (intChange / 25);
            intChange = intChange % 25;
        }else if(intChange > 10){
            coins = coins + (intChange / 10);
            intChange = intChange % 10;
        }else if(intChange > 5){
            coins = coins + (intChange / 5);
            intChange = intChange % 5;
        }else if(intChange > 1){
            coins = coins + (intChange / 1);
            intChange = intChange % 1;
        }else break;
    }
    printf("%f\n", change );
    printf("%i\n", intChange );
    printf("%i\n", coins );
    return 0;
}