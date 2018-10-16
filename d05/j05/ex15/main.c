/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:53:35 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/12 21:40:39 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int main(void)
{
	char str[] = "				sdfs&&((335";
	int i = ft_str_is_printable(str);
	printf("%d", i);
	return (0);
}
