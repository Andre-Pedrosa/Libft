/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:07:35 by atomas-p          #+#    #+#             */
/*   Updated: 2025/11/13 15:49:57 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
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

	ft_putstr_fd("putstr", fd);
    close(fd);

    return 0;
}
 */