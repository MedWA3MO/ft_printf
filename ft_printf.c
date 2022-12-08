/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:18:50 by moouaamm          #+#    #+#             */
/*   Updated: 2022/11/14 10:11:53 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	alt_printf(va_list e, const char *str, int i)
{
	if ((str[i + 1] == 'd' || str[i + 1] == 'i'))
		ft_putnbr(va_arg(e, int));
	else if (str[i + 1] == 'c')
		ft_putchar(va_arg(e, int));
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(e, char *));
	else if (str[i + 1] == 'u')
		ft_putnbr_usd(va_arg(e, unsigned int));
	else if (str[i + 1] == 'x')
		ft_putnbr_base_hex(va_arg(e, int), "0123456789abcdef");
	else if (str[i + 1] == 'X')
		ft_putnbr_base_hex(va_arg(e, int), "0123456789ABCDEF");
	else if (str[i + 1] == 'p')
	{
		ft_putstr("0x");
		ft_putnbr_base(va_arg(e, unsigned long), "0123456789abcdef");
	}
	else if (str[i + 1] == '%')
		ft_putchar('%');
	else if (str[i + 1] == '\0')
		ft_putchar('\0');
	else
		ft_putchar(str[i + 1]);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	e;

	g_j = 0;
	i = 0;
	va_start(e, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			alt_printf(e, str, i);
			i++;
		}
		else
			ft_putchar(str[i]);
		if (str[i] == '\0')
			break ;
		i++;
	}
	va_end(e);
	return (g_j);
}
