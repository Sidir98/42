/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:18:30 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/26 14:28:13 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int asc;
	int decs;

	i = -1;
	asc = 1;
	decs = 1;
	if (length >= 0 && length <= 2)
		return (1);
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			decs = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
	}
	if (asc == 0 && decs == 0)
		return (0);
	return (1);
}
