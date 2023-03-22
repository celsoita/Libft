/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:52:29 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/07 14:58:48 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	char				*pt;
	const char			*pt1;	
	size_t				i;

	pt1 = src;
	pt = dest;
	i = 0;
	while (i < n)
	{
		pt[i] = pt1[i];
		i++;
	}
	return (dest);
}
