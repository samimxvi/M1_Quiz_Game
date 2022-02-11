#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void quit()
{
    printf("\n\n\t\t\t****************@ THANK YOU FOR VISITING! @***************\n");
    printf("\t\t\t\t*********@  See you again soon @*********\n");
}

void know()
{
    system("cls");
    printf("\n \t\t\t\t\t\tHOW TO PLAY THE Quiz Game\t\t\t\t");
    printf("\n------------________________________________________________________________________________________________------------\n");
    printf("\n\n\t\t\t\t 1. This quiz game contains total 15 questions in total.");
    printf("\n\t\t\t\t 2. Each question carries 10 points.");
    printf("\n\t\t\t\t 3. You need to score 100 points continously to win the game.");
    printf("\n\t\t\t\t 4. You will be presented 4 options.");
    printf("\n\t\t\t\t 5. Choose the right one and you can move ahead.");
    printf("\n\t\t\t\t 6. Otherwise, you loose.");
    printf("\n\t\t\t\t 7. But remember, there is always a second chance.");
    printf("\n\n\t\t\t\t\t************@  ALL THE BEST @************\n\n");
}

void winner(int score, char name[])
{
    system("cls");
    if (score == 100)
    {
        printf("\n\n\n\n\n\n\n\t\t\t***********@ CONGRAGULATIONS! %s YOU WIN***************\n\n", name);
    }
}

void start()
{
    system("cls");

    struct var
    {
        int answer;
        int temp;
        int queue;
        int score;
        char name[50];
    };
    {
        struct var v1 = {0, 0, 0, 0};

        printf("\n\n\t\t\t\t\t@ WELCOME TO THE C PROGRAMMING QUIZ GAME @");
        printf("\n\n\tTake a deep breath and let's begin!\n");
        printf("\n\tPlease Enter your name : ");
        scanf("%s", &v1.name);

        for (v1.queue = 1; v1.queue <= 10; v1.queue++)
        {
            v1.answer = 0;
            v1.temp = v1.queue;
            switch (v1.temp)
            {
            case 1:
                printf("\n\n\t1.What is the only function all C programs must contain?");
                printf("\n\t\t1.start()\t\t\t2.system()\n\t\t3.main()\t\t\t4.program()");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 3)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 2:

                printf("\n\n\t2.Which of the following is a correct comment?");
                printf("\n\t\t1.*/ Comments */\t\t\t2.** Comment **\n\t\t3./* Comment */\t\t\t\t4.{ Comment }");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 3)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 3:

                printf("\n\n\t3.Which of the following is not a correct variable type?");
                printf("\n\t\t1.float\t\t\t2.real\n\t\t3.int\t\t\t4.double");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 2)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 4:

                printf("\n\n\t4.C language has been developed by?");
                printf("\n\t\t1.Ken Thompson\t\t\t2.Dennis Ritchie\n\t\t3.Peter Norton\t\t\t4.Peter Norton");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 2)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 5:
                printf("\n\n\t5.C can be used on?");
                printf("\n\t\t1.Only MS-DOS\t\t\t2.Only Linux\n\t\t3.Only window\t\t\t4.All of the above");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 4)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 6:

                printf("\n\n\t6.C programs are convrted into the machine language with the help of?");
                printf("\n\t\t1.An editor\t\t\t2.Compiler\n\t\t3.An operating system\t\t\t4.None of the above");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 2)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 7:

                printf("\n\n\t7.What is the correct value to return to the operating system upon the successful completion of a program?");
                printf("\n\t\t1.-1\t\t\t2.1\n\t\t3.0\t\t\t4.Programs do not return a value");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 3)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 8:
                printf("\n\n\t8.Which of the following is not an example of a Looping statement?");
                printf("\n\t\t1.For\t\t\t2.Do-while\n\t\t3.While\t\t\t4.Switch");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 4)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 9:
                printf("\n\n\t9.The ______ statement causes the loop to be terminated.");
                printf("\n\t\t1.Exit\t\t\t2.Break\n\t\t3.Default\t\t\t4.Continue");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 2)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            case 10:

                printf("\n\n\t10.To perform a set of instructions repeatedly which of the following can be used?");
                printf("\n\t\t1.For\t\t\t2.While\n\t\t3.If-Else-If\t\t\t4.Both a & b");
                printf("\n\n\tEnter your answer : ");
                scanf("%d", &v1.answer);
                if (v1.answer == 4)
                {
                    v1.score = v1.score + 10;
                    printf("\tYour Answer is correct!\n");
                    printf("\tYour score is : %d", v1.score);
                    winner(v1.score, v1.name);
                }
                else
                {
                    printf("\n\n\t\tYour answer is wrong!");
                    printf("\n\t\tBetter Luck next time! %s\n\n", v1.name);
                    v1.queue = 11;
                    break;
                }

            default:
            {
                v1.queue = 11;
                break;
            }
            }
        }
    }
}

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
}