/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:52:53 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/08 11:59:58 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && i < n)
	{
		if (((char *)s)[i] == (char)c)
			return (((char *)s + i));
		i++;
	}
	if (c == 0)
		return (((char *)s) + i);
	return (NULL);
}
