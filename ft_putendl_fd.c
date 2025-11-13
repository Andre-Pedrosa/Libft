/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:16:41 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 15:46:40 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
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

	ft_putendl_fd("putendl", fd);
    close(fd);

    return 0;
}
 */