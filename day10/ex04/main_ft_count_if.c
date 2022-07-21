#include <unistd.h>
#include <stdio.h>
#define n_array (sizeof (array) / sizeof ( char *))
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

int	ft_count_if(char **tab, int(*f)(char*));

int	fx_strcmp(char *s1)
{
	char *src;
	
	src = "ij";
	while (*src && *src == *s1)
	{
		s1++;
		src++;
	}
	if ((*s1 - *src) == 0)
		return (1);
	return 0;
}

int	main(int argc, char **argv)
{
    //char * array[] = {"2","0","3","4","1","1","\0"};
	///char *mouln[] = {"KQGnThoMH","Hs4Fo","Y6KuI0DwdvV","MdqkJ20fzr", "gFr8Z", "x95k", "ztu", "iXSVAtG0L"};
    //int any;

    //any = ft_any(array, &ft_atoi);
    //ft_putnbr(any);
	if (argc > 0)
		ft_putnbr(ft_count_if(argv, &fx_strcmp));
	ft_putchar('\n');
	return 0;
}