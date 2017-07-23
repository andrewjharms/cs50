#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main (void)
{
    string name = get_string();

    int n = 0;
    
    // iterate through every character of the string
    while (name[n] != '\0')
    {
        // perform action on character if it is *not* a space
        if (name[n] != 32)
        {
            // if the current character is the first character of the string, print it
            if (n == 0) printf("%c", toupper(name[n]));
            
            // if there is a space immediately before the character, print it
            if (name[n - 1] == 32) printf("%c", toupper(name[n]));
        }
        
        n++;
    }
    
    printf("\n");
    
}