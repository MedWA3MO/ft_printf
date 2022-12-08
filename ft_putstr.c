/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:06:54 by moouaamm          #+#    #+#             */
/*   Updated: 2022/11/10 16:31:41 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return ;
	}
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
