/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:11:07 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/25 02:14:36 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_super_strlen(char **str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	if (ft_super_strlen(tab) > 0)
	{
		i = 0;
		while (tab[i] && f(tab[i]) != 1)
		{
			i++;
		}
		return (tab[i] != '\0');
	}
	else
		return (0);
}
