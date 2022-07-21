#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int nb;
	int	power;

	nb = 2;
	power = 4;
	printf("The value of %d raised to %d is %d \n", nb, power, ft_iterative_power(nb, power));
	return (0);
}
