#include <unistd.h>
#include <stdio.h>
#include <string.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char d[] = "Hello World";
    char s[] = "byebye";

	unsigned int n;

	n = 3;
    //ft_strncpy(d, s, n);
	printf("ft result: source string %s and copied string %s \n", s, ft_strncpy(d, s, n));
    printf("lib result: source string %s and copied string %s \n", s, strncpy(d, s, n));
	return 0;
}