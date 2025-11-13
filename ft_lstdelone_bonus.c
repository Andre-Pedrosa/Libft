/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:03:23 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 12:03:24 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/* 
>>>>>>> 42c2952 (Reconnected local repo and added existing files)
#include <stdio.h>

int main()
{
	char	*str1 = malloc(2);
	
	t_list *node1 = ft_lstnew(str1);
	
	ft_strlcpy(str1, "1", 2);

	ft_lstdelone(node1, free);
}
 */
