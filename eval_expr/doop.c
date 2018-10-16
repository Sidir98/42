/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 19:16:21 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 16:16:56 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int doop(char *tab)
{
	int (*tabf[6])(int,int);
	char *tabop;
	int i;
	int *a;
	int *b;
	int (*f)(int,int);
	int k;

	tabop = (char*)malloc(sizeof(char) * 5);
	f = NULL;
	tabf[0] = &putadd;
	tabf[1] = &putre;
	tabf[2] = &putmult;
	tabf[3] = &putdiv;
	tabf[4] = &putmod;
	tabop = "+-*/%";
	a = NULL;
	b = NULL;
	i = 0;
	k = 0;
	while (tab[i])
	{
		if (tab[i] == '(')
		{
			while (tab[i] == ')' && tab[i])
				i++;
		}
		else if(tab[i] >= '0' && tab[i] <= '9' && a == NULL)
			*a = ft_atoi(&tab[i]);
		else if (tab[i] >= '0' && tab[i] <= '9' && b == NULL)
			*b = ft_atoi(&tab[i]);
		while (tabop[k] != tab[i] && tabop[k] && f == NULL)
			k++;
		if (tabop[k] != '\0' && f != NULL)
			f = tabf[k];
		i++;
	}
	return(f(*a,*b));
}
