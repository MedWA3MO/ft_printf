/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:30:29 by moouaamm          #+#    #+#             */
/*   Updated: 2022/11/10 16:19:14 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned long int nbr, char *base)
{
	if (nbr < 16)
		ft_putchar(base[nbr % 16]);
	else
	{
		ft_putnbr_base(nbr / 16, base);
		ft_putnbr_base(nbr % 16, base);
	}
}
