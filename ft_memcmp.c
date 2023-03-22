/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:34:08 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/07 14:57:59 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*pt;
	unsigned char		*pt1;

	pt = (unsigned char *) str1;
	pt1 = (unsigned char *) str2;
	i = 0;
	while (i < n)
	{
		if (pt[i] > pt1[i])
			return (1);
		else if (pt[i] < pt1[i])
			return (-1);
		i++;
	}
	return (0);
}
