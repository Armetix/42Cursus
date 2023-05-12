/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:29:55 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/08 15:09:38 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_pile **pile_a, t_pile **pile_b)
{
	ft_ra(pile_a);
	ft_rb(pile_b);
	ft_printf("rr\n");
}

//Lorsque on fait prev_last->next = NULL, on change la fin
//de pile_a pour faire 1,2,3,4,NULL et last contient 5 ce
//qui fait que pour last->next = pile_a on rajoute 1,2,3,4
//après le 5 ce qui donne 5,1,2,3,4 puis on remets le pointeur
//pile_a sur le premier element de la pile (pile_a = last)
void	ft_rra(t_pile **pile_a)
{
	t_pile	*last;
	t_pile	*prev_last;

	if (!(*pile_a) || !((*pile_a)->next))
		return ;
	last = *pile_a;
	while (last->next != NULL)
	{
		prev_last = last;
		last = last->next;
	}
	prev_last->next = NULL;
	last->next = *pile_a;
	*pile_a = last;
	ft_printf("rra\n");
}

void	ft_rrb(t_pile **pile_b)
{
	t_pile	*last;
	t_pile	*prev_last;

	if (!(*pile_b) || !((*pile_b)->next))
		return ;
	last = *pile_b;
	while (last->next != NULL)
	{
		prev_last = last;
		last = last->next;
	}
	prev_last->next = NULL;
	last->next = *pile_b;
	*pile_b = last;
	ft_printf("rrb\n");
}

void	ft_rrr(t_pile **pile_a, t_pile **pile_b)
{
	ft_rrb(pile_a);
	ft_rrb(pile_b);
	ft_printf("rrr\n");
}

void	ft_pa(t_pile **pile_a, t_pile **pile_b)
{
	t_pile	*tmp;

	if (!(*pile_b))
		return ;
	tmp = *pile_b;
	*pile_b = (*pile_b)->next;
	tmp->next = *pile_a;
	*pile_a = tmp;
	ft_printf("pa\n");
}
