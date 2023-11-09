/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:02:17 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/09 13:58:30 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little || big == little)
		return ((char *)big);
	if (len <= 0)
		return (0);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
