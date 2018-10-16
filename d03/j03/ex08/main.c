/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:54:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/09 09:35:26 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
//  printf("%d\n", ft_atoi("2462564"));
//  //  printf("%d\n", ft_atoi("  732 525"));
//  //  printf("%d\n", ft_atoi("gjfgdb51HBF"));
//  //  printf("%d\n", ft_atoi("\n 23 "));
//  //  printf("%d\n", ft_atoi("34+4"));
//  //  printf("%d\n", ft_atoi("2-424"));nt ft_atoi(char *str);
int main(void)
{
   	printf("%d\n", ft_atoi(" --2147483648"));
  	printf("%d\n", atoi(" --2147483648"));
	printf("%d\n", ft_atoi(" \n  \t 21356"));
	printf("%d\n", atoi(" \n  \t 21356"));
	printf("%d\n", ft_atoi("    -00021fgf356"));
	printf("%d\n", atoi("    -00021fgf356"));

	return (0);
}
