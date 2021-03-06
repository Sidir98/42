/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:04:29 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/26 01:53:51 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_super_strlen(char **str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int s;
	int st1;
	int st2;

	i = 0;
	s = 0;
	st1 = ft_strlen(s1);
	st2 = ft_strlen(s2);
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			s = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	if (s1[i] != '\0')
		return (s);
	else if (st1 > st2)
		return (s1[st2]);
	else if (st2 > st1)
		return (s2[st1] * -1);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		k;
	int		size;
	char	*tmp;

	i = 0;
	size = ft_super_strlen(tab);
	while (i < size)
	{
		k = 0;
		while (k < size - 1)
		{
			if (ft_strcmp(tab[k], tab[k + 1]) > 0)
			{
				tmp = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = tmp;
			}
			k++;
		}
		i++;
	}
}
