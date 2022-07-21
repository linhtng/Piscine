#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int nb;
	
	nb = 10;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	nb = 11;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	nb = 12;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	nb = 13;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	nb = 14;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	nb = 15;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	nb = 2123123123;
	printf("The factorial of %d is %d \n", nb, ft_iterative_factorial(nb));
	return (0);
}
