/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:14:45 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 17:05:26 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* 
#include<stdio.h>

int main()
{
	char c = '7';
	if (ft_isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c is not a digit\n", c);
}
 */