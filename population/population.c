#include <stdio.h>

int main(void)
{
    int start;
    int end;
    int years = 0;
    
    do
    {
        printf("Start size: ");
        scanf("%d", &start);
    } while (start < 9);
    
    do
    {
        printf("End size: ");
        scanf("%d", &end);
    } while (start >= end);
    
    do
    {
        start = start + (start / 3) - (start / 4);
        years++;
    } while (start < end);
    printf("Years: %i", years);
}