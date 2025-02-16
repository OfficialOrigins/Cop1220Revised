#include <stdio.h>

//Arav Halade
//02/15/25
//Perfection

int main(void){

    int perfectNum;

    printf("Enter a perfect number between 1 - 10,000: ");
    scanf("%d",&perfectNum);

    switch (perfectNum)
    {
        case 6:
            printf("Perfect Number");
            break;

        case 28:
            printf("Perfect Number");
            break;

        case 496:
            printf("Perfect Number");
            break;

        case 8128:
            printf("Perfect Number");
            break;

        default:
            printf("Not a perfect number");
            break;
    }

    return 0;
}