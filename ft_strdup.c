/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomas-p <atomas-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:34:31 by atomas-p          #+#    #+#             */
/*   Updated: 2025/10/29 12:15:40 by atomas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	src_len;

	src_len = ft_strlen(s1);
	ptr = malloc((src_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, src_len + 1);
	return (ptr);
}
