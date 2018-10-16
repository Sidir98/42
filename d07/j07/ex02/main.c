/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:37:56 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/24 19:09:05 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_ultimate_range(int **range,int min, int max);

int main(int argc, char **argv)
{
		(void)argc;
		int *range;
		printf("%d\n",ft_ultimate_range(&range,atoi(argv[1]),atoi(argv[2])));
		int i;
		i = 0;
		for (i = 0;  i < 20 ; i++)
		{
			printf("%d ,",range[i]);
		}
}
