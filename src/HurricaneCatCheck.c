//Hurricane Category Tracker
//COP-1220 2/02/25
//Module 2 Exercise 2
//Arav Halade

#include <stdio.h>

int main(void){

    double windInput;

    printf("Enter the wind speeds: ");

    scanf("%lf", &windInput);

    // printf("%lf",windInput);

    if (windInput >= 157)
    {
        printf("Category 5 hurricane");
    }

    else if (windInput >= 130 && windInput < 157)
    {
        printf("Category 4 Hurricane");
    }

    else if (windInput >= 111 && windInput < 130)
    {
        printf("Category 3 Hurricane");
    }

    else if (windInput >= 96 && windInput < 111)
    {
        printf("Category 2 Hurricane");
    }

    else if (windInput >= 74 && windInput < 96)
    {
        printf("Category 1 Hurricane");
    }

    else
    {
        printf("Not a hurricane");
    }

    return 0;
}
