/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:15:02 by pedrosa7704       #+#    #+#             */
/*   Updated: 2025/11/13 16:35:20 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main()
{
	char *s1 = "12345";
	char *s2 = "12356";

	printf("Size 3 | %d\n", ft_memcmp(s1, s2, 3));
	printf("Size 5 | %d\n", ft_memcmp(s1, s2, 5));
	printf("Size 5 | %d\n", ft_memcmp(s2, s1, 5));
}
 */