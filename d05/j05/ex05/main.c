/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:11:34 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/16 11:01:35 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char   *ft_strstr(char *str, char *to_find);

int     main(void)
{
    char *str = "abcdefedbc";
    char *to_find = "fed";
	char *st = "abcdefedbc";
    char *to_fin = "fed";
    char *result = ft_strstr(str, to_find);
    printf("%s\n", result);
	printf("%s \n",strstr(st, to_fin));
    return (0);
}
