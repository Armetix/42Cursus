/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_ba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:14:35 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/12 15:24:44 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_ra_rb_a(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = ft_find_nb_place_a(a, nb);
	if (i < ft_index(b, nb))
		i = ft_index(b, nb);
	return (i);
}

int	ft_case_rra_rrb_a(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = 0;
	if (ft_find_nb_place_a(a, nb))
		i = ft_pile_size(a) - ft_find_nb_place_a(a, nb);
	if ((i < (ft_pile_size(b) - ft_index(b, nb))) && ft_index(b, nb))
		i = ft_pile_size(b) - ft_index(b, nb);
	return (i);
}

int	ft_case_rra_rb_a(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = 0;
	if (ft_index(b, nb))
		i = ft_pile_size(b) - ft_index(b, nb);
	i = ft_find_nb_place_a(a, nb) + i;
	return (i);
}

int	ft_case_ra_rrb_a(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = 0;
	if (ft_find_nb_place_a(a, nb))
		i = ft_pile_size(a) - ft_find_nb_place_a(a, nb);
	i = ft_index(b, nb) + i;
	return (i);
}
