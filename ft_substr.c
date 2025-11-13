/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:02:06 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 13:14:32 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

/* 
#include <stdio.h>

int main ()
{
	char	*s1 = "Will Smith";
	char	*s2 = ft_substr(s1, 5, 10);

	printf("\n%s\n%lu", s2, sizeof(s2));
}
 */