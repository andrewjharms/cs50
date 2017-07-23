#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: ");
    int m = get_int();
    
    printf("Bottles: %i\n", m * 12);
    
}