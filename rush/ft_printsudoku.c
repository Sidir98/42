/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:30:39 by alesieur          #+#    #+#             */
/*   Updated: 2018/07/14 20:42:47 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	/*else add erreur si c'est pas le cas besoin de putstr pour afficher err*/
}

void	ft_printsudoku(int **sudoku)
{
	int i;
	int k;

	i = 0;
	while (i < 9)
	{
		k = 0;
		while (k < 8)
		{
			ft_putnbr(sudoku[i][k]);
			ft_putchar(' ');
			k++;
		}
		ft_putnbr(sudoku[i][k]);
		ft_putchar('\n');
		i++;
	}
}
