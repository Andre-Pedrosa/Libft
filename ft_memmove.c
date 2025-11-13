/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:18:44 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 14:40:39 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest > src && dest <= src + n - 1)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/* 
#include <stdio.h>

int main()
{
	char *str = malloc(5 + 1);

	ft_strlcpy(str, "abcde", 6);

	printf("String -> %s\n", str);
	ft_memmove(&str[2], str, 3);
	printf("String -> %s\n", str);
	free(str);
}
 */
/*
+++++++++++++++++++++++++++++++
| 'a' | 'b' | 'c' | 'd' | 'e' |
+++++++++++++++++++++++++++++++
 0x100 0x101 0x102 0x103 0x104

 Dest = 0x102 Size = 3
 Src  = 0x100
*/
