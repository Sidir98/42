/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 11:49:16 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/25 11:51:36 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H

# define DOOP_H

# include <unistd.h>

int		putadd(int a, int b);
int		putre(int a, int b);
int		putmult(int a, int b);
int		putdiv(int a, int b);
int		putmod(int a, int b);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
#endif
