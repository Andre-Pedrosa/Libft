/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:20:30 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 15:48:34 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	char	c;

	ln = n;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln *= -1;
	}
	if (ln >= 10)
		ft_putnbr_fd(ln / 10, fd);
	c = ln % 10 + 48;
	write(fd, &c, 1);
}
/* 
#include <fcntl.h>

int main(void)
{
    int fd;
    const char *filename = "output.txt";

    // fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0)
		return 1;

	ft_putnbr_fd(42, fd);
    close(fd);

    return 0;
}
 */