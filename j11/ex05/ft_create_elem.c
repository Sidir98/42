/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:49:49 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 22:16:25 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liste2.h"
t_list *ft_create_elem(void *data)
{
	t_list *m;
	if(!(m =(t_list*)malloc(sizeof(t_list))))
		return (NULL);
	m->data = data;
	m->next = NULL;
	return (m);
}
