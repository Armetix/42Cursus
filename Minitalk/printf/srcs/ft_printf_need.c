/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_need.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:10:53 by kderhet           #+#    #+#             */
/*   Updated: 2022/12/20 13:16:26 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(nb);
	len = ft_putstr(nbr);
	free(nbr);
	return (len);
}

int	ft_putpercent(void)
{
	write(1, "%", 1);
	return (1);
}
