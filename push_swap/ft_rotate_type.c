/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:21:09 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/12 15:56:43 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_a_b(t_pile *a, t_pile *b)
{
	int		i;
	t_pile	*tmp;

	tmp = a;
	i = ft_case_rra_rrb(a, b, a->nombre);
	while (tmp)
	{
		if (i > ft_case_ra_rb(a, b, tmp->nombre))
			i = ft_case_ra_rb(a, b, tmp->nombre);
		if (i > ft_case_rra_rrb(a, b, tmp->nombre))
			i = ft_case_rra_rrb(a, b, tmp->nombre);
		if (i > ft_case_ra_rrb(a, b, tmp->nombre))
			i = ft_case_ra_rrb(a, b, tmp->nombre);
		if (i > ft_case_rra_rb(a, b, tmp->nombre))
			i = ft_case_rra_rb(a, b, tmp->nombre);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_b_a(t_pile *a, t_pile *b)
{
	int		i;
	t_pile	*tmp;

	tmp = b;
	i = ft_case_rra_rrb_a(a, b, b->nombre);
	while (tmp)
	{
		ft_show_pile(tmp);
		if (i > ft_case_ra_rb_a(a, b, tmp->nombre))
			i = ft_case_ra_rb_a(a, b, tmp->nombre);
		if (i > ft_case_rra_rrb_a(a, b, tmp->nombre))
			i = ft_case_rra_rrb_a(a, b, tmp->nombre);
		if (i > ft_case_ra_rrb_a(a, b, tmp->nombre))
			i = ft_case_ra_rrb_a(a, b, tmp->nombre);
		if (i > ft_case_rra_rb_a(a, b, tmp->nombre))
			i = ft_case_rra_rb_a(a, b, tmp->nombre);
		tmp = tmp->next;
	}
	return (i);
}
