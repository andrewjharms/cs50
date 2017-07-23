#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    
    // Validate user input
    // Height must be a non-negative integer no greater than 23
    do
    {
        printf("Height: ");
        h = get_int();
    }
    while (h < 0 || h > 23);
    
    // Print each row
    for (int i = 1; i <= h; i++)
    {
        // LEFT PYRAMID
        
        // Print the number of spaces for each row
        // total spaces = (height - row number)
        for (int j = 0; j < h - i; j++)
        {
            printf(" ");
        }
        
        // Print the number of hashes for each row
        // total hashes = (row number)
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        
        
        // GAP
        
        // Print the two space gap between pyramids 
        printf("  ");
        
        
        // RIGHT PYRAMID
        
        // Print the number of hashes for each row
        // hashes = (row number)
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Finished with the current line
        printf("\n");
    }
}