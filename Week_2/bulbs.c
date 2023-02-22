#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string Message = get_string("Please, Enter The Message: ");  //get the message from the user.

    for ( int i = 0, n = strlen(Message) ; i < n; i++)
    {
        int Dec = Message[i];
        int Binary[] = {0, 0, 0, 0, 0, 0, 0, 0,};

        for (int j = 0; Dec > 0; j++)  
        {
            Binary[j] = Dec % 2;
            Dec = Dec / 2 ;
        }

        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            print_bulb(Binary[k]);
        }
        printf("\n");

    }

}


void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
