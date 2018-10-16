/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:59:51 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/17 20:27:32 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int ft_putchar(char c);
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int     ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strncpy(char *dest, char *src, unsigned int nb);

int main(void)
{
	char *src = "salut";
	char dest[10];

	ft_strncpy(dest, src, 10);
	ft_putstr(dest);
	ft_putstr(ft_strncpy(dest, src, 10));
	return(0);
}

