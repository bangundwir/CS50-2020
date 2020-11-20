#include <cs50.h>
#include <stdio.h>

const int total = 3;

int main(void);
{
    int total = get_int("Total number of scores: ")

    int scores[total];
    for (int i = 0; i < total; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Avarage: %f\n",avarage(total, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];     // sum = sum + array[i];
    }
    return sum / (float) length;
}