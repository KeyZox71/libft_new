/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:45:18 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/04 15:32:14 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str_result;
// initialize str_result
	i = 0;
	j = 0;
	while (s[i] != c || s[i])
		i++;
	if (s[i] == c)
	{
		while (s[i])
		{
			str_result[j] = s[j + i];
			j++;
		}
		return (str_result);
	}
	str_result[i] = '\0';
	return (str_result);
}
