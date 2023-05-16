/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:41:57 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/16 13:46:30 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_nb_place_b(t_pile *b, int nb)
{
	int		i;
	t_pile	*tmp;

	i = 1;
	if (nb > b->nombre && nb < ft_last(b)->nombre)
		i = 0;
	else if (nb > ft_max(b) || nb < ft_min(b))
		i = ft_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->nombre < nb || tmp->nombre > nb)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_nb_place_a(t_pile *a, int nb)
{
	int		i;
	t_pile	*tmp;

	i = 1;
	if (nb < a->nombre && nb > ft_last(a)->nombre)
		i = 0;
	else if (nb > ft_max(a) || nb < ft_min(a))
		i = ft_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->nombre > nb || tmp->nombre < nb)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}

t_pile	*ft_last(t_pile *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_index(t_pile *lst, int nb)
{
	int	i;

	i = 0;
	while (lst->nombre != nb)
	{
		i++;
		lst = lst->next;
	}
	lst->index = 0;
	return (i);
}

//void	ft_show_pile(t_pile *lst)
//{
//	while (lst)
//	{
//		ft_printf("%d, ", lst->nombre);
//		lst = lst->next;
//	}
//	ft_printf("\n");
//}