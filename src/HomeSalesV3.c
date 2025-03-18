#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

//Arav Halade
//3/18/25
//HomeSales V3


int main(void)
{
    // static int priceInputD = 0;
    // static int priceInputE = 0;
    // static int priceInputF = 0;
    static char salesIntial;
    static int total;
    static bool x = true;

    int salesP[3];

    while (x)
    {
        printf("Enter your Salesman intial: ");
        scanf(" %c", &salesIntial);

        salesIntial = toupper(salesIntial);

        char salesManIntials[3] = {'D', 'E', 'F'};

        switch (salesIntial)
        {
        case 'D':
            printf("Enter the sale value: ");
            scanf("%d",&salesP[0]);//d
            break;

        case 'E':
            printf("Enter the sale value: ");
            scanf("%d",&salesP[1]);//e
            break;

        case 'F':
            printf("Enter the sale value: ");
            scanf("%d",&salesP[2]);//f
            break;

        case 'Z':
            total = salesP[0] + salesP[1] + salesP[2];
            printf("Your grand total is: %d", total);
            if (salesP[0] > salesP[1])
            {
                if (salesP[0] > salesP[2])
                {
                    printf("\nHighest Sale: D");
                }
            }

            if (salesP[1] > salesP[0])
            {
                if (salesP[1] > salesP[2])
                {
                    printf("\nHighest Sale: E");
                }
            }

            if (salesP[2] > salesP[0])
            {
                if (salesP[2] > salesP[1])
                {
                    printf("\nHighest Sale: F");
                }
            }

            // if (priceInputE > priceInputD)
            // {
            //     if (priceInputE > priceInputF)
            //     {
            //         printf("\nHighest Sale: E");
            //     }
            // }
            //
            // if (priceInputF > priceInputD)
            // {
            //     if (priceInputF > priceInputE)
            //     {
            //         printf("\nHighest Sale: F ");
            //     }
            // }


            x = false;
            break;

        default:
            printf("Intermediate output: Error, invalid salesperson selected, please try again \n");
            break;
        }
    }
    return 0;
}