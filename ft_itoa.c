/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:37:55 by apedrosa          #+#    #+#             */
/*   Updated: 2022/11/29 19:53:26 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	negativo(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	count(long num)
{
	int	char_count;

	char_count = 0;
	while (num > 0 || (num == 0 && char_count == 0))
	{
		num /= 10;
		char_count++;
	}
	return (char_count);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*ptr;
	int		char_count;

	num = (long)n * negativo(n);
	char_count = count(num);
	if (negativo(n) == -1)
		char_count++;
	ptr = malloc(sizeof(char) * char_count + 1);
	if (!ptr)
		return (0);
	ptr[char_count] = '\0';
	while (char_count != 0)
	{
		if (char_count == 1 && negativo(n) == -1)
			ptr[char_count - 1] = '-';
		else
		{
			ptr[char_count - 1] = num % 10 + 48;
			num /= 10;
		}
		char_count--;
	}
	return (ptr);
}

// int main()
// {
// 	char	*ptr;
// 	ptr = ft_itoa(42);
// 	printf("%s", ptr);
// 	printf("%d", count(42));
// }