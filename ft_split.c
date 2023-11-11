/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:04:42 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/11 11:15:37 by adjoly           ###   ########.fr       */
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

static int	ft_countletter(char const *s, char sep)
{
	int	i;

	i = 0;
	while (s[i] != sep && s[i] != '\0')
		i++;
	return (i);
}

static void	*ft_freearr(char **arr)
{
	int	i;

	i = 0;
	free(arr[i]);
	while (arr[i])
	{
		i++;
		free(arr[i]);
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		w_count;
	char	**result;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	w_count = ft_countword(s, c);
	result = malloc((w_count + 1) * sizeof(char *));
	if (result == NULL)
		return (ft_freearr(result));
	while (i < w_count)
	{
		while (s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
		{
			k = 0;
			result[i] = malloc((ft_countletter(&s[j], c) + 1) * sizeof(char));
			if (result == NULL)
				return (ft_freearr(result));
			while (s[j] != c)
			{
				result[i][k] = s[j];
				j++;
				k++;
			}
			result[i][k] = '\0';
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
