/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 17:00:49 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/11 19:18:10 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int m;

	m = nb;
	if (power > 0)
	{
		while (power > 1)
		{
			power--;
			nb = nb * m;
		}
		return (nb);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		return (0);
}
