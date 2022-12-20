/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:24:50 by kderhet           #+#    #+#             */
/*   Updated: 2022/12/20 12:45:11 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_search(va_list arg, const char format)
{
	int	print_nb;

	print_nb = 0;
	if (format == 'c')
		print_nb += ft_putchar(va_arg(arg, int));
	else if (format == 's')
		print_nb += ft_putstr(va_arg(arg, char *));
	else if (format == 'p')
		print_nb += ft_putptr(va_arg(arg, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_nb += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		print_nb += ft_putunsigned(va_arg(arg, unsigned int));
	else if (format == 'x' || format == 'X')
		print_nb += ft_puthexa(va_arg(arg, unsigned int), &format);
	else if (format == '%')
		print_nb += ft_putpercent();
	return (print_nb);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		print_nb;
	va_list	arg;

	i = 0;
	print_nb = 0;
	va_start (arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			print_nb += ft_search(arg, format[i + 1]);
			i++;
		}
		else
			print_nb += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (print_nb);
}
