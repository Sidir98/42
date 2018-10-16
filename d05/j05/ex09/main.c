/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:29:57 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/12 21:32:41 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char str[] = "bonJourKi  jjII P ..54%) ";
	char *str2 = ft_strlowcase(str);
	printf("%s", str2);
	return(0);
}
