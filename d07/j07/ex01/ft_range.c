/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:29:54 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/24 18:22:34 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int value;
	int *tab;

	value = min;
	if (min >= max)
		return (NULL);
	i = 0;
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (value < max)
	{
		tab[i] = value;
		value++;
		i++;
	}
	return (tab);
}
