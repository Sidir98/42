/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:26:18 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/15 11:52:09 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
	{
		i++;
	}
	return (str[i] == '\0');
}
