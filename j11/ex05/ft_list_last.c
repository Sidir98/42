/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 22:52:53 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 22:55:03 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list *ft_list_last(t_list *begin_list)
{
	t_list *m;
	m = begin_list;
	while (m->next != NULL)
	{
		m = m->next;
	}
	return (m);
}
