/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:57:03 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 11:57:40 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*nc;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		nc = f(lst->content);
		node = ft_lstnew(nc);
		if (!node)
		{
			del(nc);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst ->next;
	}
	return (head);
}
/* 
#include "stdio.h"

static void *ft_content_increment(void *content)
{
	int *nc = malloc(sizeof(int));
	if (!nc)
		return (NULL);
	*nc = *(int *)content + 1;
	return (nc);
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
	
	t_list *new_node = ft_lstmap(node1, ft_content_increment, free);
	ft_lstiter(new_node, ft_print_content);
	
	ft_lstclear(&node1, free);
	ft_lstclear(&new_node, free);
}
  */