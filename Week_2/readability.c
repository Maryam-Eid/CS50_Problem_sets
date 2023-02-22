#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <cmath>

int main(void)
{
    string Text = get_string("Please, Enter The Text: ");

    int Letters = 0, Words = 1, Sents = 0;

    for (int i = 0; i < strlen(Text); i++)
    {
        if ((Text[i] > 65 && Text[i] < 90) || (Text[i] > 79 && Text[i] < 122)) //ASCII values (capital & small letters).
        {
            Letters++;
        }

        else if (Text[i] == ' ') //words = number of spaces between words + 1, that's why int words = 1;
        {
            Words++;
        }

        else if (Text[i] == '.' || Text[i] == '?' || Text[i] == '!'  ) //every sentence will end with any punctuation mark.
        {
            Sents++;
        }
    }

    float L = letters / (float) Words * 100; //L = number of letters per 100 words.
    float S = Sentns / (float) Words * 100;   //S = number of sentenses per 100 words.

    int index =round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
        printf("Before Grade 1.");
    else if (index > 1)
        printf("Grade 16+.");
    else
        printf("Grade %i.", index);
}



