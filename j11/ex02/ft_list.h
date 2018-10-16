/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:49:44 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 19:58:56 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>
typedef struct s_list
{
struct s_list		*next;
void				*data;
}t_list;

t_list *ft_create_elem(void *data);
#endif
