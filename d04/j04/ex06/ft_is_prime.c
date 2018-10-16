/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:49:39 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/12 17:03:59 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if  (nb == 2)
		return (1);
	while (nb % i != 0 && i < nb - 1)
	{
		i++;
	}	
	if (nb % i != 0)
		return (1);
	else
		return (0);
}
int main(int argc, char **argv)
{
	printf("%i",ft_is_prime(2147483647));
}

