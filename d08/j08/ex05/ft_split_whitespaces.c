/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:54:09 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/23 16:23:29 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_mesure_index(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
		{
			i++;
		}
		if (str[i] != '\0')
		{
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			{
				i++;
			}
			j++;
		}
	}
	return (j);
}

char	**ft_fill_index(char **index, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
		{
			i++;
		}
		if (str[i])
		{
			k = 0;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
				index[j][k++] = str[i++];
			index[j][k] = '\0';
			j++;
		}
	}
	return (index);
}

char	**ft_malloc_str(char **index, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
		{
			i++;
		}
		if (str[i])
		{
			k = 0;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			{
				k++;
				i++;
			}
			index[j++] = (char*)malloc(sizeof(char) * (k));
		}
	}
	return (index);
}

char	**ft_split_whitespaces(char *str)
{
	char	**index;
	int		j;

	j = ft_mesure_index(str);
	if (!(index = (char**)malloc(sizeof(char*) * (j + 1))))
		return (0);
	index[j] = 0;
	index = ft_malloc_str(index, str);
	return (ft_fill_index(index, str));
}
