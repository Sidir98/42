/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:34:46 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/06 11:27:18 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_str(int table[], int table2[])
{
	char c;

	c = '0';
	if (table[0] <= table2[0] && table[1] <= table2[1])
	{
		if ((table[0] + table[1]) < (table2[0] + table2[1]))
		{
			ft_putchar(',');
			ft_putchar(' ');
			ft_putchar(c + table[0]);
			ft_putchar(c + table[1]);
			ft_putchar(' ');
			ft_putchar(c + table2[0]);
			ft_putchar(c + table2[1]);
		}
	}
}

void	ft_boucle(int table[], int table2[])
{
	while (table[0] <= 9)
	{
		while (table[1] <= 9)
		{
			while (table2[0] <= 9)
			{
				while (table2[1] <= 9)
				{
					ft_str(table, table2);
					++table2[1];
				}
				++table2[0];
				table2[1] = 0;
			}
			++table[1];
			table2[0] = 0;
		}
		++table[0];
		table[1] = 0;
	}
}

void	ft_print_comb2(void)
{
	int		table[2];
	int		table2[2];
	char	c;

	table[0] = 0;
	table[1] = 0;
	table2[0] = 0;
	table2[1] = 2;
	c = '0';
	ft_putchar(c + 0);
	ft_putchar(c + 0);
	ft_putchar(' ');
	ft_putchar(c + 0);
	ft_putchar(c + 1);
	ft_boucle(table, table2);
}
