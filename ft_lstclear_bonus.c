/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:02:30 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 12:14:32 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	while (*lst)
	{
		node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
	*lst = NULL;
}
/* 
#include <stdio.h>

int main()
{
	char	*str1 = malloc(2);
	char	*str2 = malloc(2);
	char	*str3 = malloc(2);
	char	*str4 = malloc(2);
	
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *node3 = ft_lstnew(str3);
	t_list *node4 = ft_lstnew(str4);

	ft_strlcpy(str1, "1", 2);
	ft_strlcpy(str2, "2", 2);
	ft_strlcpy(str3, "3", 2);
	ft_strlcpy(str4, "4", 2);
	
	
	ft_lstadd_front(&node1, node2);
	ft_lstadd_front(&node1, node3);
	ft_lstadd_front(&node1, node4);
	
	t_list *node = node1;
	while (node)
	{
		printf("[%s]", (char *)node->content);
		node = node->next;
	}
	ft_lstclear(&node1, &free);
}
 */