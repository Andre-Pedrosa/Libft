/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:47:54 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 13:11:06 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	len = end - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}
/* 
#include <stdio.h>

int main()
{
	char	*s1 = "Castoere";
	char	*s2 = "e";

	printf("\n%s\n", ft_strtrim(s1, s2));
}
 */