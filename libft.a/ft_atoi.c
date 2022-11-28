/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armetix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:13:01 by armetix           #+#    #+#             */
/*   Updated: 2022/11/25 12:42:45 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	n;
	unsigned long long	tmp;
	size_t				neg;

	n = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		tmp = n;
		n = n * 10 + *str - '0';
		str++;
		if (tmp > n && neg == 1)
			return (-1);
		else if (tmp > n && neg == -1)
			return (0);
	}
	return (n * neg);
}
/*
int	main()
{
	char	str[] = "18446744073709551615558841";

	printf("atoi :    %d\n", atoi(str));
	printf("ft_atoi : %d\n", ft_atoi(str));
	return (0);
}
*/
