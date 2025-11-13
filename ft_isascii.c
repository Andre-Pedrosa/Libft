/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:14:28 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 17:02:34 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* 
#include<stdio.h>

int main()
{
	char c = 'a';
	if (ft_isascii(c))
		printf("%c is in ascii table\n", c);
	else
		printf("%c is not in ascii table\n", c);
}
 */