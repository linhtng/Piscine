#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);

int main (void)
{
  char string[30] ="haystack needle is found";
  char needle[20] ="needle";
  char *p;
  char *ft_p;

  p = strstr(string,needle);
  ft_p = ft_strstr(string, needle);

  printf ("First occurrence of string %s in \"%s\" is:\n%s\n",needle, string, p);

  printf ("First occurrence of string %s in \"%s\" is:\n%s\n",needle, string, ft_p);
  return 0; 
}
