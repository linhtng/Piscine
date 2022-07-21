#include <stdio.h>
int	ft_fibonacci(int index);

int	main(void)
{
	int	index;

	index = 8;
	printf("%d element of Fibonacci sequence is %d \n", index, ft_fibonacci(index));
}
