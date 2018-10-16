/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 11:24:48 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/25 16:24:48 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	make_op(int argc, char **argv, char *tab, int (*tabf[6])(int, int))
{
	int i;

	i = 0;
	if (argc == 4)
	{
		while (i < 5 && argv[2][0] != tab[i])
		{
			i++;
		}
		if (i == 5)
			ft_putnbr(0);
		else if (tab[i] == '/' && ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else if (tab[i] == '%' && ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(tabf[i](ft_atoi(argv[1]), ft_atoi(argv[3])));
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char	*tab;
	int		(*tabf[6])(int, int);

	tabf[0] = &putadd;
	tabf[1] = &putre;
	tabf[2] = &putmult;
	tabf[3] = &putdiv;
	tabf[4] = &putmod;
	tab = "+-*/% ";
	make_op(argc, argv, tab, tabf);
	return (0);
}
