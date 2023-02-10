#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int Height;
    do
    {
    Height = get_int ("Please, Enter The Hight: ");
    } while( Height < 1 || Height > 8);  //the Height should be between 1 and 8.

    for (int Row = 0; Row < Height ; Row++ )  //rows loop.
    {
        for (int Space = 0; Space < Height - Row; Space++)  //to insert a space before printing '#'.
        {
            printf(" ");
        }

        for(int Column = 0; Column <= Row; Column++)    //columns loop.
        {
            printf("#");

        }
        printf("\n");   //rows loop.
    }

        /*

        //the opposite direction.

       for (int Row=0; Row< Height ; Row++ )  //rows loop.
    {

        for(int Column = 0; Column<= Row; Column++ )    //columns loop.
        {
            printf("#");    //no need to insert space.
        }
        printf("\n");
    }*/

}