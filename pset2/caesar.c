#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    // program only accepts one command line argument, shift_count
    if (argc != 2)
    {
        printf("Usage: caesar shift_count\n  shift_count: number of places to shift letters\n");
        return 1;
    }
    
    // prompt user for plaintext message to encrypt
    printf("plaintext: ");
    string plaintext = get_string();

    // convert argv[1] to int
    int shift_count = atoi(argv[1]);
    int shifted;

    printf("ciphertext: ");
    
    // iterate through every character of plaintext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
            // check if the current character is a letter
            if (islower(plaintext[i]) || isupper(plaintext[i]))
            {
                // shift the letter by shift_count
                shifted = plaintext[i] + shift_count % 26;
                
                // check if the shifted value is no longer a letter, if so, correct it
                if ((shifted > 90 && shifted < 97) || (shifted > 122)) shifted -= 26;
                
                // print shifted letter
                printf("%c", shifted);
            }
            
            // current character is not a letter and does not need to be shifted
            else
            {
                // print the character as is
                printf("%c", plaintext[i]);
            }
    }
    
    printf("\n");
    return 0;
    
}