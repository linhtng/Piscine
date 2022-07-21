#include "ft_list.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void    print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list->data);
        list = list->next;
    }
}
t_list	*ft_create_elem(void *data);
//void ft_list_push_back(t_list **begin_list, void *data);
void ft_list_push_front(t_list **begin_list, void *data);

int	main(void)
{
	t_list *list;

	list = NULL;
	//list = ft_create_elem("hello\n");
	/*ft_list_push_back(&list,"first_b\n");
	ft_list_push_back(&list,"second_b\n");
	ft_list_push_back(&list,"third_b\n");*/
	ft_list_push_front(&list,"third\n");
	ft_list_push_front(&list,"second\n");
	ft_list_push_front(&list,"first\n");
	//ft_list_push_back(&list,"forth_b\n");
	ft_list_push_front(&list,"start\n");
	print_list(list);
	return (0);
}