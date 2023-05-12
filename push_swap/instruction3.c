/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:01:40 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/08 15:15:01 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_pile **pile_a, t_pile **pile_b)
{
	t_pile	*tmp;

	if (!(*pile_a))
		return ;
	tmp = *pile_a;
	*pile_a = (*pile_a)->next;
	tmp->next = *pile_b;
	*pile_b = tmp;
	ft_printf("pb\n");
}
