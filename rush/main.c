/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:01:39 by alesieur          #+#    #+#             */
/*   Updated: 2018/07/14 20:23:14 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int **ft_strtoint(char **argv);
void ft_printsudoku(int **tab);

int main(int argc, char *argv[])
{
	int i;
	int k;
	int **tab;
	
	tab = ft_strtoint(argv);
	ft_printsudoku(tab);
	return (0);
}
