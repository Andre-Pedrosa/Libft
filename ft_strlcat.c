/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:58:58 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/08 21:37:33 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (src[i] && i + dst_len < size - 1)
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (ft_strlen(src) + dst_len);
}
/* #include <stdio.h>

int main ()
{
	char 	dst[256];
	char	src[256];

	ft_memcpy(dst, "Hello", 5);
	ft_memcpy(src, " World!", 7);
	printf("Before -> %s\n", dst);
	ft_strlcat(dst, src, sizeof(dst));
	printf("After -> %s\n", dst);
} */