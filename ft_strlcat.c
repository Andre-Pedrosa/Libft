/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:11:06 by apedrosa          #+#    #+#             */
/*   Updated: 2022/11/09 19:29:58 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	destlen;

	destlen = ft_strlen(dest);
	i = destlen;
	j = 0;
	if (dstsize == 0 || dstsize <= destlen)
		return (ft_strlen(src) + dstsize);
	while (src[j] && j < dstsize - destlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(src) + destlen);
}

/*int main()
{
	char s1[] = "Hello ";
	char s2[] = "World";
	ft_strlcat(s1, s2, 7);
}*/
