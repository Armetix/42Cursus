/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:50:31 by kderhet           #+#    #+#             */
/*   Updated: 2023/04/26 17:43:28 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_message_receiver(int s)
{
	static int	bit;
	static int	i;

	if (s == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char const *argv[])
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("PID : %d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, ft_message_receiver);
		signal(SIGUSR2, ft_message_receiver);
		pause();
	}
	return (0);
}
