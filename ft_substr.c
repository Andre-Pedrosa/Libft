/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:19:11 by apedrosa          #+#    #+#             */
/*   Updated: 2022/11/22 19:44:09 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*ptr;

	if (start > ft_strlen(s))
	{
		ptr = malloc(sizeof(char));
		*ptr = 0;
		return (ptr);
	}
	sublen = ft_strlen(s + start);
	if (len > sublen)
		len = sublen;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	return (ft_memcpy(ptr, s + start, len));
}
