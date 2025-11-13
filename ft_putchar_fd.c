/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:59:27 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 15:42:21 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* 
#include <fcntl.h>   // For open flags

int main(void)
{
    int fd;
    const char *filename = "output.txt";

    // fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0)
        return 1;

    ft_putchar_fd('1', fd);
    ft_putchar_fd('2', fd);
    ft_putchar_fd('3', fd);
    ft_putchar_fd('4', fd);
    ft_putchar_fd('5', fd);
    ft_putchar_fd('\n', fd);

    close(fd);

    return 0;
}
 */