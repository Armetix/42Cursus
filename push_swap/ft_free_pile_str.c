/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_pile_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:40:22 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/16 13:45:30 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_pile(t_pile **lst)
{
	t_pile	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->nombre = 0;
		free(*lst);
		*lst = tmp;
	}
}

void	ft_free_str(char **str)
{
	char	*str1;

	if (!str)
		return ;
	while (*str)
	{
		str1 = *str;
		str++;
		free(str1);
	}
	*str = NULL;
}
