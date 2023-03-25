/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:13:23 by cschiavo          #+#    #+#             */
/*   Updated: 2023/03/25 18:22:19 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
