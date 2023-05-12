/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:44:37 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/08 12:33:46 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_pile **pile_a)
{
	int	tmp;

	if (!(*pile_a) || !((*pile_a)->next))
		return ;
	tmp = (*pile_a)->nombre;
	(*pile_a)->nombre = (*pile_a)->next->nombre;
	(*pile_a)->next->nombre = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_pile **pile_b)
{
	int	tmp;

	if (!(*pile_b) || !((*pile_b)->next))
		return ;
	tmp = (*pile_b)->nombre;
	(*pile_b)->nombre = (*pile_b)->next->nombre;
	(*pile_b)->next->nombre = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_pile **pile_a, t_pile **pile_b)
{
	ft_sa(pile_a);
	ft_sb(pile_b);
	ft_printf("ss\n");
}

// last = *pile_a veut dire que last et pile_a pointe vers la même structure
// ce qui fait en sorte que lorsque last->next est modifier alors pile_a aussi
void	ft_ra(t_pile **pile_a)
{
	t_pile	*first;
	t_pile	*last;

	if (!(*pile_a) || !((*pile_a)->next))
		return ;
	first = *pile_a;
	*pile_a = first->next;
	first->next = NULL;
	last = *pile_a;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	ft_printf("ra\n");
}

void	ft_rb(t_pile **pile_b)
{
	t_pile	*first;
	t_pile	*last;

	if (!(*pile_b) || !((*pile_b)->next))
		return ;
	first = *pile_b;
	*pile_b = first->next;
	first->next = NULL;
	last = *pile_b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	ft_printf("rb\n");
}
