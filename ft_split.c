/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:41:55 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 16:47:58 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s1, char c)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (s1[i])
	{
		while (s1[i] == c)
			i++;
		if (s1[i])
			cont++;
		while (s1[i] && s1[i] != c)
			i++;
	}
	return (cont);
}

static size_t	ft_word_len(const char *s1, char c)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	return (i);
}

static void	free_m(char **m, size_t i)
{
	while (i > 0)
		free(m[--i]);
	free(m);
}

char	**ft_split(char const *s1, char c)
{
	char	**m;
	size_t	i;
	size_t	word_len;

	m = malloc((ft_word_count(s1, c) + 1) * sizeof(char *));
	if (!m)
		return (NULL);
	i = 0;
	while (*s1)
	{
		while (*s1 == c)
			s1++;
		if (!*s1)
			break ;
		word_len = ft_word_len(s1, c);
		m[i] = malloc(word_len + 1);
		if (!m[i])
			return (free_m(m, i), NULL);
		ft_strlcpy(m[i], s1, word_len + 1);
		i++;
		s1 += word_len;
	}
	m[i] = NULL;
	return (m);
}
/* 
#include <stdio.h>

int main()
{
	char **m;
	int	i = 0;
	
	m = ft_split("Hello!", ' ');
	while (m[i])
		printf("%s\n", m[i++]);
}
*/