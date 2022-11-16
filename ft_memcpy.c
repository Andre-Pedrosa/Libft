/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:24:45 by apedrosa          #+#    #+#             */
/*   Updated: 2022/11/09 19:26:55 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	if (!dest && !src)
		return (0);
	s = (char *)src;
	d = (char *)dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main ()
{
	char str1[] = "Geekssss"; 
	char str2[] = "Quiz"; 
	
	puts("str1 before memcpy ");
	puts(str1);
	

	ft_memcpy (str1, str2, sizeof(str2));
	
	puts("\nstr1 after memcpy ");
	puts(str1);
	
	return 0;
}
*/