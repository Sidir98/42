/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:34:03 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/14 19:25:36 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int **ft_strtoint(char **argv)
{
	int k;
	int i;
	int **sudoku;

	sudoku = (int**)malloc(sizeof(int*) * 9);
	i = 0;
	while(argv[i])
	{
		sudoku[i] = (int*)malloc(sizeof(int) * 9);
		i++;
	}
	i = 1;
	while (i <= 9)
	{
		k = 0;
		while (argv[i][k])
		{
			if (argv[i][k] >= '0' && argv[i][k] <= '9')
			{
				sudoku[i - 1][k] = argv[i][k] - '0';
			}
			else
				sudoku[i - 1][k] = 0;
			k++;
		}
		i++;
	}
	return (sudoku);
}
