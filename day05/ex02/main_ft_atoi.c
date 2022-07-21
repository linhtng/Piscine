#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str);

int	main(void)
{
	char str[] = "-2147483649";
	int result;
	
	result = ft_atoi(str);
	printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("KQGnThoMH"), atoi("KQGnThoMH"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("--          232938"), atoi("--          232938"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("++          232938"), atoi("++          232938"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("+          232938"), atoi("+          232938"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("1.3f"), atoi("1.3f"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("+22323"), atoi("+22323"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi(""), atoi(""));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("0"), atoi("0"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("NULL"), atoi("NULL"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("13121789312239392832"), atoi("13121789312239392832"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("1312178931223992832"), atoi("1312178931223992832"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("0.000001"), atoi("0.000001"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("1283718jkh"), atoi("1283718jkh"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("-13121789312239392832"), atoi("-13121789312239392832"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("9223372036854775750"), atoi("9223372036854775750"));
    printf("ft_atoi is %d and lib atoi is %d\n", ft_atoi("922337203854775809"), atoi("922337203854775809"));
	return 0;
}
