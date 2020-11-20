#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //32 bit penhitungan cuma sampai 2 miliar
    // int x = get_int("x: ");
    // int y = get_int("y: ");

    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%li\n", x + y);
}