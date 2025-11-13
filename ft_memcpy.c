/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:14:52 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 16:32:22 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dst;
	size_t			i;

	if (!src && !dst)
		return (NULL);
	i = 0;
	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
