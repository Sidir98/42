/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 13:57:14 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/15 14:01:16 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
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

int		main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*tmp;

	i = 0;
	k = 0;
	while (argv[++i])
	{
		while (argv[++k + 1])
		{
			if (ft_strcmp(argv[k], argv[k + 1]) > 0)
			{
				tmp = argv[k];
				argv[k] = argv[k + 1];
				argv[k + 1] = tmp;
			}
		}
		k = 0;
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
}
