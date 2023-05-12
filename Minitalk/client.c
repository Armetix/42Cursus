/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:45:33 by kderhet           #+#    #+#             */
/*   Updated: 2023/04/27 12:06:23 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	unsigned long long	n;
	unsigned long long	tmp;
	int					sign;

	n = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		tmp = n;
		n = n * 10 + *str - '0';
		str++;
		if (tmp > n && sign == 1)
			return (-1);
		else if (tmp > n && sign == -1)
			return (0);
	}
	return (n * sign);
}

void	ft_send_message(int pid, char c)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if ((c & (0x01 << i)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(300);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
		{
			ft_printf("PID error! must be at least 1\n");
			return (1);
		}
		while (argv[2][i] != '\0')
		{
			ft_send_message(pid, argv[2][i]);
			i++;
		}
		ft_send_message(pid, '\n');
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
