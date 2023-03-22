/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:11:34 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/11 17:27:12 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_count(int n)
{
	long	i;
	long	nb;

	nb = n;
	i = 0;
	if (nb > 0)
	{
		while (nb >= 1)
		{
			nb /= 10;
			i++;
		}
	}
	else
	{
		i = 1;
		while (nb < 0)
		{	
			nb /= 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	y;
	long	z;

	if (n < 0)
	{
		y = n;
		y = -y;
	}
	else
		y = n;
	z = ft_count(n);
	str = malloc(sizeof(char) * (z + 1));
	str[z--] = '\0';
	while (z >= 0)
	{
		str[z] = (y % 10) + 48;
		y /= 10;
		z--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
