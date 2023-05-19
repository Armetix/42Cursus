/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:31:19 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/19 12:57:07 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile static	*ft_arg_is_string(char **argv)
{
	t_pile		*a;
	char		**tmp;
	int			i;

	i = 0;
	a = NULL;
	tmp = ft_split(argv[1], ' ');
	while (tmp[i])
		i++;
	if (i == 1)
	{
		ft_printf("only 1 number, no need to sort.\n");
		exit(1);
	}
	i = 0;
	a = ft_create_pile_a(tmp, i);
	ft_free_str(tmp);
	free(tmp);
	return (a);
}

void static	ft_push_swap(int argc, char **argv)
{
	t_pile	*a;
	int		i;

	a = NULL;
	i = 1;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		a = ft_arg_is_string(argv);
	else
		a = ft_create_pile_a(argv, i);
	if (!a || ft_check_dup(a))
	{
		ft_free_pile(&a);
		ft_error();
	}
	if (!ft_check_sort(a))
		ft_sort(&a);
	ft_free_pile(&a);
}

int	main(int argc, char **argv)
{
	ft_check_arg(argv);
	ft_push_swap(argc, argv);
	return (0);
}
