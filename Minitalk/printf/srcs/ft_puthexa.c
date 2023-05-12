/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:04:25 by kderhet           #+#    #+#             */
/*   Updated: 2022/12/20 13:24:53 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hexa_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_printhexa(unsigned int n, const char format)
{
	if (n >= 16)
	{
		ft_puthexa(n / 16, format);
		ft_puthexa(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			else if (format == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	ft_puthexa(unsigned int n, const char format)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_printhexa(n, format);
	return (ft_hexa_len(n));
}
