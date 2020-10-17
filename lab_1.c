#include <stdio.h>
#include <math.h>

int is_simple(int number);

int get_power(int number, int power);

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            if (i % 3 == 0)
            {
                printf("Fizz");
            }
            if (i % 5 == 0)
            {
                printf("Buzz");
            }
        }
        else
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

int is_simple(int number)
{
    if (number <= 1)
    {
        printf("Number less than 2. Can't be simple or composite number.\n");

        return -1;
    }
    else
    {
        for (int i = 2; i <= (int)sqrt(number); i++)
        {
            if (number % i == 0)
            {
                return 0;
            }
        }
    }

    return 1;
}

int get_power(int number, int power)
{
    int result = 1;

    for (int i = 1; i <= power; i++)
    {
        result *= number;
    }

    return result;
}