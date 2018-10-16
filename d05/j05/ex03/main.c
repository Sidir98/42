/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:59:51 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/12 18:54:28 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_len(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char *src = "";
    char dest[ft_len(src)];

    ft_strcpy(dest, src);
    printf("%s", dest);
    return(0);
}

