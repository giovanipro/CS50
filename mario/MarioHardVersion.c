#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Type the height: ");
        scanf("%i", &n);
    } while (n < 1 || n > 8);   
    
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)  
        {
            if(n - j - 2 < i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("  ");
        
        for(int k = n; k > 0; k--)
        {
            if (n - k - 1 < j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}