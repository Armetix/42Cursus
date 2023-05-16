/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:37:00 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/12 17:02:13 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_pile **a)
{
	t_pile	*b;
	int		i;

	b = NULL;
	if (ft_pile_size(*a) == 2)
		ft_sa(a, 1);
	else
	{
		b = ft_sort_b(a);
		a = ft_sort_a(a, &b);
		i = ft_index(*a, ft_min(*a));
		if (i < ft_pile_size(*a) - i)
		{
			while ((*a)->nombre != ft_min(*a))
				ft_ra(a, 1);
		}
		else
		{
			while ((*a)->nombre != ft_min(*a))
				ft_rra(a, 1);
		}
	}
}

void	ft_sort_b_to_three(t_pile **a, t_pile **b)
{
	int		i;
	t_pile	*tmp;

	while (ft_pile_size(*a) > 3 && !ft_check_sort(*a))
	{
		tmp = *a;
		i = ft_rotate_type_a_b(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_ra_rb(*a, *b, tmp->nombre))
				i = ft_apply_ra_rb(a, b, tmp->nombre, 'a');
			else if (i == ft_case_rra_rrb(*a, *b, tmp->nombre))
				i = ft_apply_rra_rrb(a, b, tmp->nombre, 'a');
			else if (i == ft_case_ra_rrb(*a, *b, tmp->nombre))
				i = ft_apply_ra_rrb(a, b, tmp->nombre, 'a');
			else if (i == ft_case_rra_rb(*a, *b, tmp->nombre))
				i = ft_apply_rra_rb(a, b, tmp->nombre, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_pile	*ft_sort_b(t_pile **a)
{
	t_pile	*b;

	b = NULL;
	if (ft_pile_size(*a) > 3 && !ft_check_sort(*a))
		ft_pb(a, &b);
	if (ft_pile_size(*a) > 3 && !ft_check_sort(*a))
		ft_pb(a, &b);
	if (ft_pile_size(*a) > 3 && !ft_check_sort(*a))
		ft_sort_b_to_three(a, &b);
	if (!ft_check_sort(*a))
		ft_sort_three(a);
	return (b);
}

t_pile	**ft_sort_a(t_pile **a, t_pile **b)
{
	int		i;
	t_pile	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_rotate_type_b_a(*a, *b);
		while (i >= 0)
		{
			if (i == ft_case_ra_rb_a(*a, *b, tmp->nombre))
				i = ft_apply_ra_rb(a, b, tmp->nombre, 'b');
			else if (i == ft_case_ra_rrb_a(*a, *b, tmp->nombre))
				i = ft_apply_ra_rrb(a, b, tmp->nombre, 'b');
			else if (i == ft_case_rra_rrb_a(*a, *b, tmp->nombre))
				i = ft_apply_rra_rrb(a, b, tmp->nombre, 'b');
			else if (i == ft_case_rra_rb_a(*a, *b, tmp->nombre))
				i = ft_apply_rra_rb(a, b, tmp->nombre, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (a);
}

void	ft_sort_three(t_pile **a)
{
	if (ft_min(*a) == (*a)->nombre)
	{
		ft_rra(a, 1);
		ft_sa(a, 1);
	}
	else if (ft_max(*a) == (*a)->nombre)
	{
		ft_ra(a, 1);
		if (!ft_check_sort(*a))
			ft_sa(a, 1);
	}
	else
	{
		if (ft_index(*a, ft_max(*a)) == 1)
			ft_rra(a, 1);
		else
			ft_sa(a, 1);
	}
}
