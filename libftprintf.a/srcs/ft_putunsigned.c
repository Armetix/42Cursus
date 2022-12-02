/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:04:25 by kderhet           #+#    #+#             */
/*   Updated: 2022/12/02 12:59:04 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_unsigned_len(unsigned int n)
{
	int	len;

	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

void	ft_uitoa(unsigned int n)
{
	char	*nbr;
	int		len;

	len = ft_unsigned_len(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (0);
	nbr[len--] = '\0';
	while (n != 0)
	{
		nbr[len] = '0' + (n % 10);
		nb = nb / 10;
		len--;
	}
	return (nbr);
}

int	ft_putunsigned(unsigned int n)
{
	int		len;
	char	*nbr;

	len = 0;
	if (n == 0)
	{
		write(1, '0', 1);
		len = 1;
	}
	else
	{
		nbr = ft_uitoa(n);
		len += ft_putstr(nbr);
		free(nbr);
	}
	return (len);
}
