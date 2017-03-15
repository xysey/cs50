/*
 * my take on the water problem of cs50
 * Author: xysey
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes = 0, bottles = 0;
    printf("minutes: ");
    minutes = GetInt();
    printf("bottles: %i\n", bottles = minutes * 12);
    return 0;
}