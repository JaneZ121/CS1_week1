#include <cs50.h>
#include <stdio.h>

int sumOdd(long num);
int sumEven(long num);

int main(void)
{
    //promote for input
    long num = get_long("Number: ");
    if (num < 100000000000)
    {
        printf("INVALID\n");
    }
    //calculate checksum
    else if ((sumOdd(num) + sumEven(num)) % 10 != 0)
    {
        printf("INVALID\n");
    }
    //check length and starting digits
    else if (num / 10000000000000 == 34 || num / 10000000000000 == 37)
    {
        printf("AMEX\n");
    }
    else if (num / 100000000000000 < 56 && num / 100000000000000 > 50)
    {
        printf("MASTERCARD\n");
    }
    else if (num / 1000000000000 == 4 || num / 1000000000000000 == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}

int sumOdd(long num)
{
    int sumOdd = 0;
    int a = 1;
    while (num > 0)
    {
        a = num % 10;
        sumOdd += a;
        num /= 100;
    }
    return sumOdd;
}

int sumEven(long num)
{
    int sumEven = 0;
    int a = 1;
    num /= 10;
    while (num > 0)
    {
        a = num % 10;
        int b = 2 * a;
        while (b > 0)
        {
            a = b % 10;
            sumEven += a;
            b /= 10;
        }
        num /= 100;
    }
    return sumEven;
}
