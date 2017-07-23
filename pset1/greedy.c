#import <cs50.h>
#import <stdio.h>
#import <math.h>

int main (void) {
    
    float amount;

    do
    {
        printf("How much change is owed? ");
        amount= get_float();
    }
    while (amount < 0);
    
    // convert to cents
    int cents = round(amount * 100);
    
    int coins = 0;
    
    if (cents >= 25)
    {
        coins += cents / 25;
        cents %= 25;
    }
    
    if (cents >= 10)
    {
        coins += cents / 10;
        cents %= 10;
    }
    
    if (cents >= 5)
    {
        coins += cents / 5;
        cents %= 5;
    }
    
    if (cents >= 1)
    {
        coins += cents;
    }
    
    printf("%i\n", coins);

}