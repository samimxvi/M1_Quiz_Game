// contains main function

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "quiz.h"

struct choice
{
    int ch;
    int menu;
};

int main()
{
    struct choice c1 = {0, 0};

home:
    system("cls");
    printf("\n\n\t\t\t******************@   WELLCOME TO THE QUIZ GAME   @******************\n");
    printf("\n\t\t\t\t\t\tTOPIC: C PROGRAMMING\n");
    printf("\n\t\t Press 1 to START the game");
    printf("\n\n\t\t Press 2 to KNOW how to play ");
    printf("\n\n\t\t Press 3 to QUIT the game \n");
    printf("\n\t\t ENTER YOUR OPTION: ");
    scanf("%d", &c1.ch);

    switch (c1.ch)
    {
    case 1:
        start();
        printf("\n\n\tEnter 1 to return to the menu: ");
        scanf("%d", &c1.menu);
        if (c1.menu == 1)
        {
            goto home;
        }
        else
        {
            printf("\n\n\n\t\tPlease enter valid option!\n\n\n");
        }
        break;

    case 2:
        know();
        printf("\n\tEnter 1 to return to the menu: ");
        scanf("%d", &c1.menu);
        if (c1.menu == 1)
        {
            goto home;
        }
        else
        {
            printf("\n\n\n\t\tPlease enter valid option!\n\n\n");
        }
        break;

    case 3:
        quit();
        break;

    default:
        printf("\n\n\n\t\tPlease enter valid option!\n\n\n");
        break;
    }

    return 0;
}
