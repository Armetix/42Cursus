/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:31:19 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/12 15:18:39 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(int argc, t_pile **a)
{
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		ft_error();
	else
	{
		if (!a || ft_check_dup(*a))
		{
			ft_free_pile(a);
			ft_error();
		}
		if (!ft_check_sort(*a))
			ft_sort(a);
		ft_free_pile(a);
	}
}

int	main(int argc, char const **argv)
{
	t_pile	*a;

	a = ft_create_pile_a(argc, argv);
	ft_check_arg(argv);
	ft_push_swap(argc, &a);
	return (0);
}
