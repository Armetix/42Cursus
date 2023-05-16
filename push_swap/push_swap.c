/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <kderhet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:31:19 by kderhet           #+#    #+#             */
/*   Updated: 2023/05/16 13:41:49 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(const char *str)
{
	size_t	i;
	size_t	n;
	size_t	neg;

	i = 0;
	n = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (!ft_isdigit(str[i]))
			ft_error();
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * neg);
}

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
