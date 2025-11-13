/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedrosa7704 <pedrosa7704@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:04:19 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 12:40:11 by pedrosa7704      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_buffer(long ln)
{
	size_t	i;

	i = 0;
	if (ln < 0)
	{
		i++;
		ln *= -1;
	}
	if (ln == 0)
		return (1);
	while (ln > 0)
	{
		ln /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr_in_str(long ln, char *str)
{
	if (ln < 0)
	{
		str[0] = '-';
		ln *= -1;
	}
	if (ln >= 10)
		ft_putnbr_in_str(ln / 10, str);
	str[ft_strlen(str)] = ln % 10 + 48;
}

char	*ft_itoa(int n)
{
	long	ln;
	char	*str;

	ln = n;
	str = ft_calloc(get_buffer(ln) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_putnbr_in_str(ln, str);
	return (str);
}
/* 
#include <stdio.h>
	
int main()
{	
	printf("%s\n", ft_itoa(42));
}
*/