/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apedrosa <apedrosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:10:51 by apedrosa          #+#    #+#             */
/*   Updated: 2022/11/29 22:49:37 by apedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', fd);
	}
	if (num >= 0 && num <= 9)
	{
		ft_putchar_fd(num + 48, fd);
		return ;
	}
	ft_putnbr_fd(num / 10, fd);
	ft_putnbr_fd(num % 10, fd);
}
