#include <cs50.h>
#include <stdio.h>

int main(void)
{
int height = get_int ("Height: \n");
printf("Height: %i\n", height);
if (height >= 1 && height <= 8) 
for (int i = 0; i<height+1; i++)
{
    for (int k = height-i; k>0; k--)
    {
        printf(" ");
    }
    for (int j = 0; j<i; j++)
    {
        printf("#");
    }
        printf(" ");
        for (int j = 0; j<i; j++)
    {
        printf("#");
    }
    printf("\n");
}
}
