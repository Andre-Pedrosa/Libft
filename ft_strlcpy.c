/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:30:56 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 16:26:19 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/* 
#include <stdio.h>

int main()
{
	char	s[7] = "Castor";
	char	d[7];
	
	printf("%zu\n", ft_strlcpy(d, s, ft_strlen(s) + 1));
	printf("%s\n", s);
}
 */