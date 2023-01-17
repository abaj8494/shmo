#include <stdio.h>
#include <stdbool.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int choice, run, score;

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
    scanf("%d", &choice);

    while(run) {
        switch (choice) {
            case 1:
                run = addition(&score);
            case 2:
                run = subtraction(&score);
            case 3:
                run = multiplication(&score);
            case 4:
                run = division(&score);
            case 5:
                run = percentages(&score);

        }
    }
    printf("You have chosen %d\n", choice);
    return 0;

}
