#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d ", a);
	printf("%d ", b);
	return (0);
}

