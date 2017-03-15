#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int height;

    // ensure the height is between 0 and 23
    do {
        printf("height: ");
        height = GetInt();
        
        // provide a tip
        if ((height < 0) || (height > 23)) printf("Ensure the value is between 1 and 23\n");
    } while ((height < 0) || (height > 23));
    
    int width = height + 1; // the width of the pyramid is one more than the height
    
    for (int pyramidHeight = 0; pyramidHeight < height; pyramidHeight++) {

        for (int pyramidWidth = 0; pyramidWidth < width; pyramidWidth++) {
        
            if (pyramidWidth <= width-3-pyramidHeight) printf(" ");
            else printf("#");   

        }
        printf("\n");
    }
}
