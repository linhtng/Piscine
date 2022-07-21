#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = -10;
	div = 1;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d ", a);
	printf("%d ", b);
	printf("%d ", div);
	printf("%d ", mod);
	return (0);
}

