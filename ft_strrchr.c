/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:41:32 by pedrosa7704       #+#    #+#             */
/*   Updated: 2025/11/11 07:15:53 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (last);
}
/* 
#include <stdio.h>

int main()
{
	char	*str = "Castor na 42";

	printf("[%s]\n", ft_strrchr(str, 'a'));
}
 */