/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:12:32 by cschiavo          #+#    #+#             */
/*   Updated: 2022/10/09 18:32:56 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*pt1;
	int		l;

	l = ft_strlen(s);
	pt1 = malloc(sizeof(char) * (l + 1));
	ft_memcpy(pt1, s, l);
	pt1[l] = '\0';
	return (pt1);
}
