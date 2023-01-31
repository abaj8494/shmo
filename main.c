#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
 * provides terminal clear function
 *
 */
#include "main.h"
#include <dos.h>
/*
 * provides rand
 *
 */


int main(int argc, char *argv[])
{
    system("cls");
    int ex, lvl, run, score;

    run = true;
    score = 0;

    printf("Welcome to an arithmetic builder!\n");
    printf("What would you like to work on today?\n"
            "\t1. Addition"
            "\t2. Subtraction"
            "\t3. Multiplication"
            "\t4. Division"
            "\t5. Percentages\n");
    printf("> ");
    scanf("%d", &ex);
    printf("Awesome! What level would you like to practise on?\n");
    printf("(You may choose from 1, 2 or 3)\n"
            "> ");
    scanf("%d", &lvl);

    while(run) {
        system("cls");
        printf("To exit the exercise enter -1 at any point\n");
        sleep(3);
        switch (ex) {
            case 1:
                run = addition(&score, &lvl);
                break;
            case 2:
                run = subtraction(&score, &lvl);
                break;
            case 3:
                run = multiplication(&score, &lvl);
                break;
            case 4:
                run = division(&score, &lvl);
                break;
            case 5:
                run = percentages(&score, &lvl);
                break;
            default:
                printf("This is not a valid exercise!\n");
                sleep(1);
        }
    }
    return 0;

}
