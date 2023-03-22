/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:00:28 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/07 16:35:05 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	{
		while (src[j] && (i + j + 1) < size)
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i < size)
			dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
