/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:00:36 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/09 17:36:28 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;

	i = 0;
	if (str2 < str1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
