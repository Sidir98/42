/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:30:27 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/12 22:21:34 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				s;
	int				st1;
	int				st2;

	i = 0;
	s = 0;
	st1 = ft_strlen(s1);
	st2 = ft_strlen(s2);
	while (i < n)
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
