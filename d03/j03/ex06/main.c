/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:54:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/06 16:30:58 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);
int main(void)
{
	char tab[2];
	tab[0] = 'H';
	tab[1]='i';
	printf("%i\n",ft_strlen(tab));
	return (0);
}
