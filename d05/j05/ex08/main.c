/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:29:57 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/09 18:35:05 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char str[] = "bonJourKi  jjII P ..54%) ";
	char *str2 = ft_strupcase(str);
	printf("%s", str2);
}
