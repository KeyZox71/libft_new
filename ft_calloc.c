/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjoly <adjoly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:02:26 by adjoly            #+#    #+#             */
/*   Updated: 2023/11/11 00:55:15 by adjoly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <complex.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (size != 0 && nmemb != 0 && (nmemb * size) / nmemb != size)
		return (malloc(0));
	result = malloc(size * nmemb);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, size * nmemb);
	return (result);
}
