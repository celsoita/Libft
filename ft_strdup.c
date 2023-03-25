/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:12:32 by cschiavo          #+#    #+#             */
/*   Updated: 2023/03/25 18:24:32 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
