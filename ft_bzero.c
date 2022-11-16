/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:35:54 by apedrosa          #+#    #+#             */
/*   Updated: 2022/10/26 17:24:26 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	while (n > 0)
	{
		(*(unsigned char *)ptr++) = 0;
		n--;
	}	
}
/*
int main()
{
	char str[] = "abc";
	ft_bzero(str, sizeof(char) * 3);
	printf("%c", str[0]);
	printf("%c", str[1]);
	printf("%c", str[2]);
}
*/