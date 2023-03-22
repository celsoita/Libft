/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:42:07 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/08 16:35:12 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	char				*pt;

	i = 0;
	pt = (char *)s;
	while (i < n)
	{
		if ((unsigned char)pt[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
