/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:54:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/07 20:16:04 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);
int main(void)
{
	int *a;
	int *b;
	int y;
	int z;

	y = 42;
	z = 5;
	a = &y;
	b = &z;
	ft_ultimate_div_mod(a,b);
	printf("%i\n",*a);
	printf("%i\n",*b);
	return (0);
}

