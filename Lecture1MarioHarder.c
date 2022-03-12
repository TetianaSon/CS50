#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt)
{
int n;
do
{
n = get_int("%s", prompt);
}
while ((n < 1) || (n > 8));
return n;
};

int main(void)
{
   int height = get_positive_int ("Height: ");
if (height >= 1 && height <= 8) 
for (int i = 0; i<height+1; i++)
{
    if (i>=1)
    {
    if(i!=height+1)
    {
    for (int k = height-i; k>0; k--)
    {
        printf(" ");
    }
    for (int j = 0; j<i; j++)
    {
        printf("#");
    }
        printf("  ");
        for (int j = 0; j<i; j++)
    {
        printf("#");
    }
    printf("\n");
    }
    }
}
}
