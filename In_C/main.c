#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */

/* Declaring Structure type */ 
struct date{
    int day;
    int month;
    int year;
};
struct month{
    int numOfDays;
    char aMonth[3];
};

/* Declaring structure varibles */
struct date listDATE[10];
struct month MyMonth;

int main(){
    /* Initializing Global Variables */
    /* intialising struct dates */
    struct date listDATE[10] = {{5,5,22}, {6,5,22}, [3]={8,5,22}};

    printf("1st date, index 0 = %d/%d/%d\n", listDATE[0].day, listDATE[0].month, listDATE[0].year);
    printf("2st date, index 1 = %d/%d/%d\n", listDATE[1].day, listDATE[1].month, listDATE[1].year);
    printf("3st date, index 2 = %d/%d/%d\n", listDATE[2].day, listDATE[2].month, listDATE[2].year);
    printf("4st date, index 3 = %d/%d/%d\n", listDATE[3].day, listDATE[3].month, listDATE[3].year);
    printf("5st date, index 4 = %d/%d/%d\n\n", listDATE[4].day, listDATE[4].month, listDATE[4].year);

    printf("MY New month\n");
    struct month MyMonth = {31, {'X','Y', 'X'}};
    printf("My new month has %d days, and has the acrynim of %s\n", MyMonth.numOfDays, MyMonth.aMonth);
    return 0;
}

/* Function Details */