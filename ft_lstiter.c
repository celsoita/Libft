/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschiavo <cschiavo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:46:45 by cschiavo          #+#    #+#             */
/*   Updated: 2023/03/25 18:22:33 by cschiavo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	if (lst != 0)
	{
		p = lst;
		while (p)
		{
			(*f)(p->content);
			p = p->next;
			if (p == 0)
				return ;
		}
	}
}
