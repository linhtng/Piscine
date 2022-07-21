#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int min;
    int max;
    int *range;
    int i;

    i = 0;
    min = -20;
    max = 30;
    range = ft_range(min, max);
    if (range == 0)
        printf("The pointer points to NULL, it can't be dereferenced\n");
    while (i < (max - min))
    {
        printf("%d ", range[i]);
        i++;
    }
    return (0);
}
