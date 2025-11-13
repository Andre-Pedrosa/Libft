/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:38:14 by pedrosa7704       #+#    #+#             */
/*   Updated: 2025/11/11 05:43:32 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main()
{
	printf("%d\n", ft_strncmp("abc", "abcd", 4));  // should NOT be 0
	printf("%d\n", ft_strncmp("abc", "abc", 3));   // should be 0
	printf("%d\n", ft_strncmp("abc", "abZ", 3));   // should be > 0
	printf("%d\n", ft_strncmp("abZ", "abc", 3));   // should be < 0
}
 */