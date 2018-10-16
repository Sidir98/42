/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:21:35 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/22 16:15:07 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
#define EVAL_EXPR_H
#include <unistd.h>
#include <stdlib.h>
int putadd(int a, int b);
int putre(int a, int b);
int putmult(int a, int b);
int putdiv(int a, int b);
int putmod(int a, int b);
int ft_putchar(char c);
void ft_putnbr(int nb);
int ft_atoi(char *str);
int doop(char *tab);
#endif

