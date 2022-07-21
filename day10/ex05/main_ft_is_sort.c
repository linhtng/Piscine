#include <unistd.h>
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

int ft_nbcmpr(int i, int j)
{
    return (i - j);
}

int	ft_is_sort(int *tab, int length, int (*f) (int, int));

int	main(void)
{
	int tab1[] = {-404105, 0, -341122, -325467, -274222, -264747, -261995, -171386, -156382, -60435, 9693, 98418, 159416, 256203, 325692, 329696, 366754};
	int tab2[] = {-392938, -370412, -190191, -120447, -111938, -84966, -3041};
	int tab3[] = {-7, -6, -5, -3, -2, -1};
	int tab4[] = {7, 2, 2, 2, 2, 2};
	ft_putnbr(ft_is_sort(tab1, 17, &ft_nbcmpr));
	ft_putchar('\n');
	ft_putnbr(ft_is_sort(tab2, 7, &ft_nbcmpr));
	ft_putchar('\n');
	ft_putnbr(ft_is_sort(tab3, 6, &ft_nbcmpr));
	ft_putchar('\n');
	ft_putnbr(ft_is_sort(tab4, 6, &ft_nbcmpr));
	ft_putchar('\n');
	return 0;
}