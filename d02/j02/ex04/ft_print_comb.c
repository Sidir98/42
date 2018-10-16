/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 14:16:58 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/06 11:49:21 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_putchar(char c);

int			ft_str(int a, int b, int c)
{
	char	d;

	d = '0';
	if ((a != b && a != c && b != c) && (a != 7 && b!=8 && c != 9) )
	{
		ft_putchar(d + a);
		ft_putchar(d + b);
		ft_putchar(d + c);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else if( a == 7 && b == 8 && c == 9 )
	{
		ft_putchar(d + a);
		ft_putchar(d + b);
		ft_putchar(d + c);
	}
	return (0);
}

void		ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7)
	{
		b = 0;
		while (b <= 8)
		{
			c = 0;
			while (c <= 9)
			{
				ft_str(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}
