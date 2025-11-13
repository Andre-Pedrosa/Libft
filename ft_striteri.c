/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:54:01 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 16:30:58 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* 
#include <stdio.h>

static void	helper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
int main()
{
	char	*str = malloc(6 + 1);
	ft_strlcpy(str, "Castor", 7);
	ft_striteri(str, helper);
	printf("%s\n", str);
	free(str);
}
 */