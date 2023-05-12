/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_ab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:23:44 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/12 13:08:09 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_ra_rb(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = ft_find_nb_place_b(b, nb);
	if (i < ft_index(a, nb))
		i = ft_index(a, nb);
	return (i);
}

int	ft_case_rra_rrb(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = 0;
	if (ft_find_nb_place_b(b, nb))
		i = ft_pile_size(b) - ft_find_nb_place_b(b, nb);
	if ((i < (ft_pile_size(a) - ft_index(a, nb))) && ft_index(a, nb))
		i = ft_pile_size(a) - ft_index(a, nb);
	return (i);
}

int	ft_case_rra_rb(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = 0;
	if (ft_index(a, nb))
		i = ft_pile_size(a) - ft_index(a, nb);
	i = ft_find_nb_place_b(b, nb) + i;
	return (i);
}

int	ft_case_ra_rrb(t_pile *a, t_pile *b, int nb)
{
	int	i;

	i = 0;
	if (ft_find_nb_place_b(b, nb))
		i = ft_pile_size(b) - ft_find_nb_place_b(b, nb);
	i = ft_index(a, nb) + i;
	return (i);
}
