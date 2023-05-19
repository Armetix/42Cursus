/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:50:41 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/19 12:51:35 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int static	ft_isnumber(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-'))
		return (1);
	return (0);
}

int	ft_check_dup(t_pile *lst)
{
	t_pile	*tmp;

	while (lst)
	{
		tmp = lst->next;
		while (tmp)
		{
			if (lst->nombre == tmp->nombre)
				return (1);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}

void	ft_check_arg(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!ft_isnumber(argv[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

int	ft_check_sort(t_pile *a)
{
	int	i;

	i = a->nombre;
	while (a)
	{
		if (i > a->nombre)
			return (0);
		i = a->nombre;
		a = a->next;
	}
	return (1);
}
