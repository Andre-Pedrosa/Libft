/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:57:52 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 12:15:28 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/* 
#include <stdio.h>

int main()
{
	int *n1 = malloc(sizeof(int));

	*n1 = 1;

	t_list *node1 = ft_lstnew(n1);

	printf("[%d]\n", *(int *)node1->content);
	ft_lstdelone(node1, free);
}
 */
