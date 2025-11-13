/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:13:53 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/12 16:59:30 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/* 
#include <stdio.h>

int main()
{
	char c = '7';
	if (ft_isalnum(c))
		printf("%c is alpha numeric\n", c);
	else
		printf("%c is not alpha numeric\n", c);
}
 */