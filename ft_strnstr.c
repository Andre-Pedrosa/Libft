/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:30:48 by pedrosa7704       #+#    #+#             */
/*   Updated: 2025/11/12 12:53:53 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j]
			&& haystack[i + j] && needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/* 
#include "libft.h"

int main()
{
	char *haystack = "Zoe Valois";
	char *needle = "Valois";
	

	printf("%s", ft_strnstr(haystack, needle, ft_strlen(haystack)));
}
 */