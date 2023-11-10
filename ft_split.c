/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:04:42 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/10 17:05:46 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char sep)
{
	int	i;
	int	w_count;

	i = 0;
	if (s[i] != sep)
		w_count++;
	while (s[i])
	{
		if (s[i] == sep && s[i - 1] != sep)
			w_count++;
		i++;
	}
	return (w_count);
}

char	**ft_split(char const *s, char c)
{
	int		w_count;
	char	**result;

	w_count = ft_countword(s, c);
	result = malloc(w_count);
	return (result);
}
