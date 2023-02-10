#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string Name = get_string("What's Your Name? ");     //to get the user answer.
    printf("Hello, %s\n", Name);       //printing statement.
}