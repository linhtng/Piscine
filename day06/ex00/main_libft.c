#include <stdio.h>
#include <string.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char *str;
    char *s1;
    char *s2;
    int a;
	int b;

	a = 23;
	b = 64;

    str = "Hellooo";
    s1 = "ABC";
    s2 = "A";
    printf("Length of %s is %d \n", str, ft_strlen(str));
    printf("Length of %s is %lu \n", str, strlen(str));
    printf("string compare result of %s and %s is %d \n", s1, s2, ft_strcmp(s1, s2));
    printf("string compare result of %s and %s is %d \n", s1, s2, strcmp(s1, s2));

	ft_swap(&a, &b);
	printf("%d and %d\n", a, b);
    char putstr[] = "Hello World";

	ft_putstr(putstr);
	ft_putchar('\n');
	return 0;
}