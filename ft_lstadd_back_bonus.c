/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:02:22 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 14:12:20 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last_node = ft_lstlast(*lst);
		last_node ->next = new;
	}
}
/* 
#include <stdio.h>

int main()
{
	char	*str1 = malloc(2);
	char	*str2 = malloc(2);

	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	
	ft_strlcpy(str1, "1", 2);
	ft_strlcpy(str2, "2", 2);
	
	ft_lstadd_back(&node1, node2);
	
	t_list *node = node1;
	while (node)
	{
		printf("[%s]", (char *)node->content);
		node = node->next;
	}
	ft_lstclear(&node1, &free);
}
 */