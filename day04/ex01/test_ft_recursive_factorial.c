#include <stdio.h>
int	ft_recursive_factorial(int nb);

int	main(void)
{
	int nb;

	nb = 5;
	printf("The factorial of %d is %d \n", nb, ft_recursive_factorial(nb));
	return (0);
}
