#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
// WINDOWS #include <dos.h>
/*
 * provides rand
 *
 */

bool addition(int *score, int* lvl) {
    int a, b, ans = 0;
    time_t t; 
    srand((unsigned) time(&t));
    while (ans >= 0) {
        system("clear");
        printf("Your score is %d.\n", *score);

        a = rand() % (int) pow(10, *lvl);
        b = rand() % (int) pow(10, *lvl);
        printf("What is the sum of %d and %d?\n> ", a, b);
        scanf("%d", &ans);
        if (ans == (a + b)) {printf("Correct!\n"); (*score)++;}
        else printf("Incorrect!\n");
        sleep(1);
    }
    if (ans == -1) {printf("Exiting...\n"); return false;}
    else if (ans == -2) {printf("Returning home...\n"); return true;}
    else {printf("error.\n"); return false;}
}

bool subtraction(int *score, int* lvl) {
    int a, b, ans = 0;
    time_t t; 
    srand((unsigned) time(&t));
    while (ans >= 0) {
        system("clear");
        printf("Your score is %d.\n", *score);

        a = rand() % (int) pow(10, *lvl);
        b = rand() % (int) pow(10, *lvl);
        printf("What is the difference between %d and %d?\n> ", a, b);
        scanf("%d", &ans);
        if (ans == (a - b)) {printf("Correct!\n"); (*score)++;}
        else printf("Incorrect!\n");
        sleep(1);
    }
    if (ans == -1) {printf("Exiting...\n"); return false;}
    else if (ans == -2) {printf("Returning home...\n"); return true;}
    else {printf("error.\n"); return false;}
}

bool multiplication(int *score, int* lvl) {
    // implement karatsuba's trick for efficient multiplication
    // consider creating a new c file for this function
    int a, b, ans = 0;
    time_t t; 
    srand((unsigned) time(&t));
    while (ans != -1) {
        system("clear");
        printf("Your score is %d.\n", *score);

        a = rand() % (int) pow(10, *lvl);
        b = rand() % (int) pow(10, *lvl);
        printf("What is the product of %d and %d?\n> ", a, b);
        scanf("%d", &ans);
        if (ans == (a * b)) {printf("Correct!\n"); (*score)++;}
        else printf("Incorrect!\n");
        sleep(1);
    }
    if (ans == -1) {printf("Exiting...\n"); return false;}
    else if (ans == -2) {printf("Returning home...\n"); return true;}
    else {printf("error.\n"); return false;}
}

bool division(int *score, int* lvl) {
    // don't forget about division by 0!
    int a = 1, b = 2, ans = 0;
    time_t t; 
    srand((unsigned) time(&t));
    while (ans != -1) {
        system("clear");
        printf("Your score is %d.\n", *score);

        a = rand() % (int) pow(10, *lvl);
        b = rand() % (int) pow(10, *lvl);
        while (a % b != 0 || a == 0 || b == 0) {
            a = rand() % (int) pow(10, *lvl);
            b = rand() % (int) pow(10, *lvl);
        } 

        printf("What is the quotient of %d / %d?\n> ", a, b);
        scanf("%d", &ans);
        if (ans == (a / b)) {printf("Correct!\n"); (*score)++;}
        else printf("Incorrect!\n");
        sleep(1);
    }
    if (ans == -1) {printf("Exiting...\n"); return false;}
    else if (ans == -2) {printf("Returning home...\n"); return true;}
    else {printf("error.\n"); return false;}
}

bool percentages(int *score, int* lvl) {
    printf("This function has not been implemented yet."
            "Please wait for the next version :)\n");
    sleep(5);
    printf("Exiting...\n");
    return false;
}
