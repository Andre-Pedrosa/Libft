/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:58:10 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 11:58:32 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (lst == NULL)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		lst = lst-> next;
		i++;
	}
	return (i);
}
/* 
#include "stdio.h"

int main()
{
	int *n1 = malloc(sizeof(int));
	int *n2 = malloc(sizeof(int));
	int *n3 = malloc(sizeof(int));
	int *n4 = malloc(sizeof(int));
	
	*n1 = 1; *n2 = 2; *n3 = 3; *n4 = 7;
	
	t_list *node1 = ft_lstnew(n1);
	t_list *node2 = ft_lstnew(n2);
	t_list *node3 = ft_lstnew(n3);
	t_list *node4 = ft_lstnew(n4);

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);
	ft_lstadd_back(&node1, node4);
	
	printf("\n[%d]\n", ft_lstsize(node3));
	ft_lstclear(&node1, free);
}
 */