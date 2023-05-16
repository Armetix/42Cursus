/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:12:58 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/12 17:03:33 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_ra_rb(t_pile **a, t_pile **b, int nb, char c)
{
	if (c == 'a')
	{
		while ((*a)->nombre != nb && ft_find_nb_place_b(*b, nb) > 0)
			ft_rr(a, b);
		while ((*a)->nombre != nb)
			ft_ra(a, 1);
		while (ft_find_nb_place_b(*b, nb) > 0)
			ft_rb(b, 1);
		ft_pb(a, b);
	}
	else
	{
		while ((*b)->nombre != nb && ft_find_nb_place_a(*a, nb) > 0)
			ft_rr(a, b);
		while ((*b)->nombre != nb)
			ft_rb(b, 1);
		while (ft_find_nb_place_a(*a, nb) > 0)
			ft_ra(a, 1);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rra_rrb(t_pile **a, t_pile **b, int nb, char c)
{
	if (c == 'a')
	{
		while ((*a)->nombre != nb && ft_find_nb_place_b(*b, nb) > 0)
			ft_rrr(a, b);
		while ((*a)->nombre != nb)
			ft_rra(a, 1);
		while (ft_find_nb_place_b(*b, nb) > 0)
			ft_rrb(b, 1);
		ft_pb(a, b);
	}
	else
	{
		while ((*b)->nombre != nb && ft_find_nb_place_a(*a, nb) > 0)
			ft_rrr(a, b);
		while ((*b)->nombre != nb)
			ft_rrb(b, 1);
		while (ft_find_nb_place_a(*a, nb) > 0)
			ft_rra(a, 1);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rra_rb(t_pile **a, t_pile **b, int nb, char s)
{
	if (s == 'a')
	{
		while ((*a)->nombre != nb)
			ft_rra(a, 1);
		while (ft_find_nb_place_b(*b, nb) > 0)
			ft_rb(b, 1);
		ft_pb(a, b);
	}
	else
	{
		while (ft_find_nb_place_a(*a, nb) > 0)
			ft_rra(a, 1);
		while ((*b)->nombre != nb)
			ft_rb(b, 1);
		ft_pa(a, b);
	}
	return (-1);
}

int	ft_apply_ra_rrb(t_pile **a, t_pile **b, int nb, char s)
{
	if (s == 'a')
	{
		while ((*a)->nombre != nb)
			ft_ra(a, 1);
		while (ft_find_nb_place_b(*b, nb) > 0)
			ft_rrb(b, 1);
		ft_pb(a, b);
	}
	else
	{
		while (ft_find_nb_place_a(*a, nb) > 0)
			ft_ra(a, 1);
		while ((*b)->nombre != nb)
			ft_rrb(b, 1);
		ft_pa(a, b);
	}
	return (-1);
}
