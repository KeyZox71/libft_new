/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:59:58 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/04 15:18:28 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (s == NULL || len == 0)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
