/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:49:22 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/07 14:55:59 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (0);
}
