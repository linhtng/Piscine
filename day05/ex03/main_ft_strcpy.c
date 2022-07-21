#include <unistd.h>
#include <stdio.h>
#include<string.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char d[20];
    char s[] = "BrawlTime!";
    ft_strcpy(d,s);
	printf("Ft_strcpy: source string %s and copied string is %s \n", s, d);
    printf("Lib strcpy: source string %s and copied string is %s \n", s, strcpy(s, d));
	return 0;
}