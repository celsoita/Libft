/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:04:24 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/07 16:18:15 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char				*b;
	size_t				i;
	size_t				j;

	b = (char *) big;
	i = 0;
	if (little[i] == 0)
		return (b);
	while (b[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] != '\0' && (i + j) < len)
		{
			if (b[i + j] == little[j])
				j++;
			else
				break ;
		}
		if (little[j] == '\0')
			return (&b[i]);
		i++;
	}
	return (0);
}
