/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:34:00 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 22:58:39 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
int ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	t_list *m;
	m = begin_list;
	while (m != NULL)
	{
		m = m->next;
		i++;
	}
	return (i);
}
