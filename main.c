/*
 * Name: Elliott Perez Ramos
 * Student ID:
 * Honor code: I pledge that this submission is solely my work, and that I have neither given, nor received help from anyone.
 */


#include <stdio.h>

int main(void) {


    /*
     * What will this program do: This will take in an input from the command line and we will then parse that input
     * We need to take inputs from the user.
     *
     *
     */


    printf("Please enter a simple arithmetic expression, seperated by a space.\n");


    // The statement arithmetic expression will look like the following:
    // a + b =

    double a;
    double b;
    char space1;
    char space2;
    char operator;
    char response[20];


    int matched = scanf("%lf%c%c%c%lf", &a, &space1, &operator, &space2, &b);

    if (matched ==5 && space1 == ' ' && space2 == ' ') {
        printf("Valid!\n");
    }
    else {
        printf("Invalid\n");
    }


    printf("%f\n", a);
    printf("%c\n", operator);
    printf("%f\n", b);
    printf("%d\n", matched);

    if (matched == 3) {
        if (a == (int)a) {
            printf("The number passed in is an integer!!!");
        }
    }




    return 0;
}
