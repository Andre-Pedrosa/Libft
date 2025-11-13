/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:54:22 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 12:15:06 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* 
#include "stdio.h"

static void ft_content_increment(void *content)
{
	*(int *)content += 1;
}
static void ft_print_content(void *content)
{
	printf("[%d]", *(int *)content);
}

int main()
{
	int *n1 = malloc(sizeof(int));
	int *n2 = malloc(sizeof(int));
	int *n3 = malloc(sizeof(int));
	int *n4 = malloc(sizeof(int));
	
	*n1 = 1; *n2 = 2; *n3 = 3; *n4 = 4;
	
	t_list *node1 = ft_lstnew(n1);
	t_list *node2 = ft_lstnew(n2);
	t_list *node3 = ft_lstnew(n3);
	t_list *node4 = ft_lstnew(n4);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstadd_back(&node1, node4);
	
	ft_lstiter(node1, ft_print_content);
	printf("\n");
	ft_lstiter(node1, ft_content_increment);
	ft_lstiter(node1, ft_print_content);
	
	ft_lstclear(&node1, free);
}
 */