/*
 * my take on the mario (full)pyramid problem of cs50
 * Author: xysey
 */

#include <cs50.h>
#include <stdio.h>

void drawPyramid(int height);

int main(void)
{
    int height = 0;
    //check the height
    do
    {
        printf("height: ");
        height = GetInt();
    }while(height < 0 || height > 23);
    
    //draw pyramid
    drawPyramid(height);
    return 0;
}

void drawPyramid(int height)
{
    for (int superCounter = height; superCounter > 0; superCounter--)
    {
        //print left pyramid
        for (int leftCounter = 0; leftCounter < height; leftCounter++)
        {
            //print spaces as long as leftCounter is less than the value of superCounter - 1
            if (leftCounter < superCounter - 1)
            {
                printf(" ");
            }
            else //print hashes
            {
                printf("#");
            }
        }
         
        //pring the gap
        printf("  ");
        //print right pyramid
        for (int rightCounter = 0; rightCounter <= height - superCounter; rightCounter++)
        {
           printf("#");  
        }
        printf("\n");
    }
}