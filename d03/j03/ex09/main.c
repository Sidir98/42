/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 11:02:45 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/09 08:54:21 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void	ft_swap(int *a, int *b);
void 	ft_sort_integer_table(int *tab, int size);
int		rand_a_b(int a, int b){
	return	rand()%(b-a) + a;
}

int main(void){
	int tab[20];
	srand(time(NULL));
	for ( int i = 0 ; i < 20; i++)
	{
		tab[i] =rand_a_b(0,50);
	}
	ft_sort_integer_table(tab,20);
	for ( int i = 0 ; i < 20; i++)
	{
		printf("%d,",tab[i]);
	}
}

