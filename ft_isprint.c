/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:14:39 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 17:05:31 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* 
#include<stdio.h>

int main()
{
	char c = 'a';
	if (ft_isprint(c))
		printf("%c is printable\n", c);
	else
		printf("%c is not printable\n", c);
}
 */