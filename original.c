//this was made by Zachary Charles Youngblood, born on May 25, 2002, as a part of AP high school computer science class.

#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int input;
    bool valid;
//reject non-options from the input
    do
    {
        input = get_int("Choose between sizes 3, 6, and 10: ");
        valid = false;
        if (input == 3 || input == 6 || input == 10)
        {
            valid = true;
        }
    }
    while (valid == false);
    //this is the if statement that prints the plus picture for when the input size is 3, because it is structurally different than 6 and 10
    if (input == 3)
    {
        printf("  #\n# # #\n  #\n");
    }
    //we want this enormous chunk of code to be exclusive to user inputs of 6 and 10, which is why we have the if statement
    if (input == 6 || input ==10)
    {
    //top block of #'s
        for (int i = 0; i < (input-2)/2; i++)
        {
            if (input == 6)
            {
                printf("    ");
            }
            else
            {
                printf("        ");
            }
            for (int j = 0; j < input/2; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        //middle chunk of plus (The widest piece)
        for (int k = 0; k < 2; k++)
        {
            //left piece
            for(int l = 0; l < ((input / 2) - 1); l++)
            {
                printf("# ");
            }
            //middle piece
            for(int m = 0; m < (input / 2); m++)
            {
                printf("#");
            }
            //right piece (similar to left except backwards)
             for(int o = 0; o < ((input / 2) - 1); o++)
            {
                printf(" #");
            }
            printf("\n");
        }
        //the bottom block of the plus (similar code to top block)
        for (int i = 0; i < (input-2)/2; i++)
        {
            if (input == 6)
            {
                printf("    ");
            }
            else
            {
                printf("        ");
            }
            for (int j = 0; j < input/2; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }

}
