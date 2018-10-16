/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:01:45 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/11 11:59:14 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int x;

	if (nb > 0 && nb <= 12)
	{
		x = 1;
		while (nb > 0)
		{
			x = x * nb;
			nb--;
		}
		return (x);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0 || nb > 12)
		return (0);
	return (0);
}
