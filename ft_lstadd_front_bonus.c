/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:59:37 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 14:16:57 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

static void ft_print_content(void *content)
{
	printf("[%d]", *(int *)content);
}

int main()
{
	char	*str1 = malloc(2);
	char	*str2 = malloc(2);

	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);

	ft_strlcpy(str1, "1", 2);
	ft_strlcpy(str2, "2", 2);	
	
	ft_lstadd_front(&node1, node2);	
	
	ft_lstiter(node1, ft_print_content);
	ft_lstclear(&node1, &free);
}
 */