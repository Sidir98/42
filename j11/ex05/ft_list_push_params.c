/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:02:28 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/26 09:42:14 by ibouabda         ###   ########.fr       */
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
	}
}

t_list *ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *m;
	i = ac - 1;
	m = ft_create_elem(av[i]);
	while(i > 0)
	{
		ft_list_push_front(&m,av[i]);
		i--;
	}
	return (m);
}

