// //TempCompare
// //Cop-1220
// //Arav Halade
// //03/18/25
//
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
//
// int main(void)
// {
//     //array/var dec
//     int temps[5];
//
//     for (int i = 0; i < 5; ++i)
//     {
//         printf("Enter value for Temp %d: ",i+1);
//         scanf("%d",&temps[i]);
//
//         while (temps[i] < -30 || temps[i] > 130)
//         {
//                 printf("Temp %d is invalid, enter a new valid temp value: \n", temps[i]);
//                 printf("Enter a new Temp value %d: ", i+1);
//                 scanf("%d", &temps[i]);
//         }
//     }
//
//         if (temps[0] < temps[1] && temps[1] < temps[2] && temps[2] < temps[3] && temps[3] < temps[4])
//         {
//             printf("Getting warmer\n");
//
//         }
//
//         else if (temps[0] > temps[1] && temps[1] > temps[2] && temps[2] > temps[3] && temps[3] > temps[4])
//         {
//             printf("Getting Colder\n");
//
//         }
//
//         else
//         {
//             printf("It's a mixed bag\n");
//         }
//
//     printf("5-day temperature: \n");
//
//     for (int s = 0; s < 5; ++s)
//     {
//         printf("%d \n", temps[s]);
//     }
//
//     double avg = 0;
//
//     for (int y = 0; y < 5; ++y)
//     {
//         avg += temps[y];
//     }
//
//     avg = avg/5;
//
//     printf("Average temp is %f", avg);
//
//     return 0;
// }
