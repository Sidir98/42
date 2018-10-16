/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 20:03:04 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 21:32:12 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *m;
	if (*begin_list == NULL)//faut il laisser cela
		*begin_list = ft_create_elem(data);
	else
	{
	m = ft_create_elem(data);
	m->next = *begin_list;
	*begin_list = m;
	}
}
