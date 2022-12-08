/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:18:31 by moouaamm          #+#    #+#             */
/*   Updated: 2022/11/14 10:31:16 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		g_j;
void	ft_putnbr_base(unsigned long int nbr, char *base);
void	ft_putnbr_base_hex(unsigned int nbr, char *base);
void	ft_putnbr_usd(unsigned int nb);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char d);
void	ft_putstr(char *str);
int		ft_printf(const char *str, ...);

#endif