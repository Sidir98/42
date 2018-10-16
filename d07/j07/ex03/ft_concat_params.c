/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 11:46:08 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/23 22:18:24 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcatm(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (dest[i])
	{
		i++;
	}
	if (i > 0)
	{
		dest[i] = '\n';
		i++;
	}
	while (src[k])
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		s;
	char	*str;

	i = 1;
	s = 0;
	while (i < argc)
	{
		s += ft_strlen(argv[i]);
		i++;
	}
	if (!(str = (char*)malloc(sizeof(char) * (s + argc - 1))))
		return (NULL);
	if (argc > 1)
	{
		str[0] = '\0';
		i = 1;
		while (i < argc)
		{
			ft_strcatm(str, argv[i]);
			i++;
		}
		str[s + argc - 2] = '\0';
	}
	return (str);
}
