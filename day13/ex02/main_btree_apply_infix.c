#include "ft_btree.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#define COUNT 10

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

void ft_printstr(void *str)
{
    char *string;

    string = (char*)str;
    ft_putstr(string);
    ft_putchar('\n');
}
void    print_btree(t_btree *root, int space)
{
    int i;

    i = COUNT;
    if (root == NULL)                   // base case
        return;
    space += COUNT;                     // Increase distance between levels
    print_btree(root->right, space);    // Process right child first
    ft_putchar('\n');
    //Print current node after space
    while (i < space)
    {
        ft_putchar(' ');
        i++;
    }
    ft_putstr(root->item);
    // Process left child
    print_btree(root->left, space);     
}

void btree_apply_infix(t_btree *root, void (*applyf)(void *));

int	main(void)
{
	t_btree *root = btree_create_node("root");

	root->left = btree_create_node("1st_left");
	root->right = btree_create_node("1st_right");
    root->left->left = btree_create_node("2nd_left");
    //print_btree(root, 0);               // Pass initial space count as 0
    btree_apply_infix(root, ft_printstr);
    //ft_putchar('\n');
	return (0);
}