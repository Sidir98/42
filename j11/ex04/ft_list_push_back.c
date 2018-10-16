/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 16:13:36 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 23:48:21 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list *ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *m;
	m = *begin_list;
	while (m->next != NULL)
	{
		m = m->next;
	}
	m->next = ft_create_elem(data);
}
