#include <cs50.h>
#include <stdio.h>

void rightAlign(int numberOfSlash, int height);
void leftAlign(int numberOfSlash, int height);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i < height + 1; i++)
    {
        rightAlign(i, height);
        printf("  ");
        leftAlign(i, height);
        printf("\n");
    }
}

void rightAlign(int numberOfSlash, int height)
{
    for (int i = 0; i < height - numberOfSlash; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < numberOfSlash; i++)
    {
        printf("#");
    }
}

void leftAlign(int numberOfSlash, int height)
{
    for (int i = 0; i < numberOfSlash; i++)
    {
        printf("#");
    }
}