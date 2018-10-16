/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 15:38:01 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/12 17:08:34 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1 && nb <= 12)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if (nb < 0 && nb > 12)
	{
		return (0);
	}
	return (0);
}
