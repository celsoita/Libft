/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:13:23 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/12 09:52:28 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*pt;

	if (!nmemb || !size)
	{
		nmemb = 1;
		size = 1;
	}
	i = nmemb * size;
	pt = malloc(i);
	if (!pt)
		return (0);
	else
		ft_bzero(pt, i);
	return (pt);
}
