#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
    int a, b;
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 10; b++)
        {
            printf("%d", a);
            printf("%d", b);
            putchar(',');
        }
    }
    printf("\n");
    return (0);
}
