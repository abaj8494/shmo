#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
 * provides terminal clear function
 *
 */
#include "main.h"
#include <unistd.h>
// WINDOWS #include <dos.h>
/*
 * provides rand
 *
 */


int main(int argc, char *argv[])
{
    State game = malloc(sizeof(*game));

    system("clear");
    bool run = true;

    printf("Welcome to an arithmetic builder!\n");
    printf("What would you like to work on today?\n"
            "\t1. Addition"
            "\t2. Subtraction"
            "\t3. Multiplication"
            "\t4. Division"
            "\t5. Percentages\n");
    printf("> ");
    scanf("%d", game->ex);
    printf("Awesome! What level would you like to practise on?\n");
    printf("(You may choose from 1, 2 or 3)\n"
            "> ");
    scanf("%d", game->lvl);

    while(run) {
        system("clear");
        printf("To exit the exercise enter -1 at any point or "
                "enter -2 to choose a different exercise.\n");
        sleep(3);
        switch (*game->ex) {
            case 1:
                run = addition(game);
                break;
            case 2:
                run = subtraction(game);
                break;
            case 3:
                run = multiplication(game);
                break;
            case 4:
                run = division(game);
                break;
            case 5:
                run = percentages(game);
                break;
            default:
                printf("This is not a valid exercise!\n");
                sleep(1);
        }
    }
    return 0;

}
