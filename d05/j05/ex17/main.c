/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:59:51 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/13 14:39:22 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, int nb);

int main(int argc, char **argv)
{
	int i = 1;
	if(argc == 5)
	{
		printf("%s\n", strncat(argv[3], argv[4], i));
		//strncat(argv[3],argv[4], 0);
		printf("%s\n", ft_strncat(argv[1], argv[2], i));
	}
	return (0);
}
