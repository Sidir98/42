/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbrulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:45:37 by hbrulin           #+#    #+#             */
/*   Updated: 2018/07/12 21:04:47 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int     main(void)
{
    char *s1 = "dffh";
    char *s2 = "";
    int result = ft_strcmp(s1, s2);
	int result2 = strcmp(s1, s2);
    printf("%i\n", result);
	printf("%i\n", result2);
    return (0);
}
