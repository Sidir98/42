/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 00:22:15 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/07 19:09:12 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	int k;
	int i;
	int c;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	c--;
	while (i <= c / 2)
	{
		ft_swap(&str[i], &str[c - i]);
		i++;
	}
	return (str);
}
