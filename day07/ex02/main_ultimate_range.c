#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int min;
    int max;
    int i;
    int *p1 = NULL;
    int **p2 = &p1;
    int range_size;

    i = 0;
    min = -10;
    max = 10;
    range_size = ft_ultimate_range(p2, min, max);
    if (p1 == 0)
        printf("The pointer points to NULL, it can't be dereferenced\n");
    while (i < range_size)
    {
        printf("%d ", p2[0][i]);
        i++;
    }
    printf("Size of range is %d\n,", range_size);
    return (0);
}
