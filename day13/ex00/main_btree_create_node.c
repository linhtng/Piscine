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
int	main(void)
{
	t_btree *root = btree_create_node("1");

	root->left = btree_create_node("2");
	root->right = btree_create_node("3");
    root->left->left = btree_create_node("4");
    print_btree(root, 0);               // Pass initial space count as 0
    ft_putchar('\n');
	return (0);
}