#include <cs50.h>
#include <stdio.h>

// // CONTOH 1
// int main(void)
// {
//     printf("?\n");
//     printf("?\n");
//     printf("?\n");
//     printf("?\n");
// }

// //CONTOH 2
// int main(void)
// {
//     for (int i = 1; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// //CONTOH 3
// int main(void)
// {
//     //Get positive integer from user
//     int n;
//     do
//     {
//         n = get_int("Width: ");
//     }
//     while (n < 1);

//     // Print out than many question marks
//     for (int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

// //CONTOH 4
// int main(void)
// {
//     printf("####\n");
//     printf("####\n");
//     printf("####\n");
//     printf("####\n");
// }

// //CONTOH 5
int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}