/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:04:25 by kderhet           #+#    #+#             */
/*   Updated: 2022/11/22 13:13:09 by kderhet          ###   ########.fr       */
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
	if (num >= 16)
	{
		ft_puthexa(num / 16, format);
		ft_puthexa(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_puthexa(unsigned int n, const char *format)
{
	if (n == 0)
	{
		write(1, '0', 1);
		return (1);
	}
	else
		ft_printhexa(n, format);
	return (ft_hexa_len(n));
}
