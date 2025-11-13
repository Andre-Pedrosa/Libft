/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:33:59 by atomas-p       #+#    #+#             */
/*   Updated: 2025/10/22 17:12:48 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*(ptr++) = 0;
		n--;
	}
}
/* 
#include <stdio.h>

int main()
{
	char str[2] = "42";

	printf("[%s\n]", str);
	ft_bzero(str, 2);
	printf("[%s]", str);
}
 */