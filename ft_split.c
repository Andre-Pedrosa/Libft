/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:53:16 by apedrosa          #+#    #+#             */
/*   Updated: 2022/11/24 17:28:18 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	flag;
	int	words;

	flag = 0;
	words = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (words);
}

int	ft_word_size(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	int		word_size;
	int		i;
	int		j;
	char	**ptr;

	i = 0;
	j = 0;
	words = word_count(s, c);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (0);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		word_size = ft_word_size(s, c, i);
		ptr[j] = ft_substr(s, i, word_size);
		i += word_size;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

// int main ()
// {
// 	char *s = "Tripouille";
// 	printf("%d\n", word_count(s, ' '));
// 	char	**teste = ft_split(s, ' ');
// 	int i = 0;
// 	while (teste[i])
// 	{
// 		printf("result:%s\n", teste[i]);
// 		i++;
// 	}
// }