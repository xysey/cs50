/*
 * my take on the mario pyramid problem of cs50
 * Author: xysey
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyramidHeight = 0;
   //check the value of the int
   do
   {
        printf("height: ");
        pyramidHeight = GetInt();
   }while(pyramidHeight <= 0 || pyramidHeight >= 24 )
   
    return 0;
}