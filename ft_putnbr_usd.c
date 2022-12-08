/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_usd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:46:34 by moouaamm          #+#    #+#             */
/*   Updated: 2022/11/09 18:47:07 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_usd(unsigned int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_putnbr_usd(nb / 10);
		ft_putnbr_usd(nb % 10);
	}
	else if (nb >= 0 && nb <= 9)
	{
		c = nb + 48;
		ft_putchar(c);
	}
}
