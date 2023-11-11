/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:04:42 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/11 00:36:54 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char sep)
{
	int	i;
	int	w_count;

	i = 0;
	w_count = 0;
	while (s[i])
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			w_count++;
		i++;
	}
	return (w_count);
}

const int	ft_countletter(char const *s, char sep)
{
	int	i;

	i = 0;
	while (s[i] != sep || s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		w_count;
	char	**result;

	w_count = ft_countword(s, c);
	result = malloc((w_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		while ()
		{
		
		}
	}
	return (result);
}
