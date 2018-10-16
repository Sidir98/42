/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:39:12 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 16:36:12 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include <stdio.h>
int nb = 0;
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int eval_expr(char *str)
{
	int i;
	int s;
	int a;
	int b;
	char *tab;

	i = 0;
	a = 0;
	s = ft_strlen(str);
	tab = (char*)malloc(sizeof(char) * (s + 1));
	while (str[a] != '(' && str[a])
		a++;
	a++;
	//printf("a = %i\n",a);
	b = s;
	while(str[b] != ')' && b > 0)
	{
		//printf("b = %i\n", b);
		b--;
	}
	//printf("tab[a]  = %c\n",tab[a]);
	while (a < b)
	{
		//printf("a = %i\n",a);
		tab[i] = str[a];
		a++;
		i++;
	}
	tab[i] = '\0';
	if (b > 0)
	{
		eval_expr(tab);
	}
	//nb += doop(tab);
	printf("%s\n",tab);
	return (0);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putchar(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return(0);
}

