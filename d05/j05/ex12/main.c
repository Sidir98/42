/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:53:35 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/09 21:42:43 by hbrulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int main(void)
{
	char str[] = "";
	int i = ft_str_is_numeric(str);
	printf("%d", i);
	return (0);
}
