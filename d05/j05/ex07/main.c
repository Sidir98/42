/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:05:08 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/12 21:15:16 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);

int     main(void)
{
	unsigned int n = 3;

    char s1[] = "bonfdhjocxb";
    char s2[] = "bojgh dfh  ";
    int result = ft_strncmp(s1, s2, n);
    int result2= strncmp(s1, s2, n);
    printf("%i\n", result);
    printf("%i\n", result2);
    return (0);
}

