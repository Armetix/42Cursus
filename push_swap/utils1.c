/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:25:32 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/16 13:25:23 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile static	*ft_create_pile_node(int value)
{
	t_pile	*node;

	node = (t_pile *)malloc(sizeof(t_pile));
	if (!node)
		return (NULL);
	node->nombre = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_pile	*ft_create_pile_a(char **argv, int i)
{
	t_pile	*pile_a;
	t_pile	*current;
	t_pile	*new_node;

	pile_a = NULL;
	current = NULL;
	while (argv[i])
	{
		new_node = ft_create_pile_node(ft_atoi_push(argv[i]));
		if (pile_a == NULL)
		{
			pile_a = new_node;
			current = new_node;
		}
		else
		{
			current->next = new_node;
			new_node->prev = current;
			current = new_node;
		}
		i++;
	}
	return (pile_a);
}

int	ft_min(t_pile *lst)
{
	int	i;

	i = lst->nombre;
	while (lst)
	{
		if (lst->nombre < i)
			i = lst->nombre;
		lst = lst->next;
	}
	return (i);
}

int	ft_max(t_pile *lst)
{
	int	i;

	i = lst->nombre;
	while (lst)
	{
		if (lst->nombre > i)
			i = lst->nombre;
		lst = lst->next;
	}
	return (i);
}

int	ft_pile_size(t_pile *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
