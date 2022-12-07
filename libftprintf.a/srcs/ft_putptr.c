/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:04:25 by kderhet           #+#    #+#             */
/*   Updated: 2022/12/07 12:18:25 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptr_len(unsigned int n)
{
	int	len;

	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_printptr(unsigned int n, const char *format)
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
			ft_putchar_fd((n - 10 + 'a'), 1);
	}
}

int	ft_putptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
	{
		write(1, '0', 1);
	}
	else
	{
		ft_printptr(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
