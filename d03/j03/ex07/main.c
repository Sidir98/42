/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:54:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/07 09:17:05 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrev(char *str);
int main(void)
{
	char tab[7];
	tab[0] = 'H';
	tab[1]='0';
	tab[2] = '1';
	tab[3]='2';
	tab[4]='3';
	tab[5]='4';
	tab[6]='5';

	printf("%s\n",ft_strrev(tab));
	return (0);
}
