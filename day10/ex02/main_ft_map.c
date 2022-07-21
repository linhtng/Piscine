#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	else
	{
		fact = 0;
	}
	if (fact < 0)
	{
		fact = 0;
	}
	return (fact);
}

int	*ft_map(int *tab, int length, int (*f) (int));

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int *map;
	int i = 0;

	map = ft_map(tab, 5, &ft_iterative_factorial);
	while (map[i] != '\0')
	{
		ft_putnbr(map[i]);
		ft_putchar(' ');
		i++;
	}
	free(map);
	return 0;
}
