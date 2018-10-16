/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 18:24:46 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/13 16:24:19 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt2(int nb, int i)
{
	if ((i * i) == nb)
	{
		return (i);
	}
	else if (i * i > nb)
	{
		return (0);
	}
	else
	{
		return (ft_sqrt2(nb, i + 1));
	}
}

int	ft_sqrt(int nb)
{
	int i;
	int j;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	j = ft_sqrt2(nb, i);
	return (j);
}
int main (void)
{
	ft_sqrt(20);
	return (0);
}
