/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:15:09 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/26 12:35:11 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main()
{
	int	test = ' ';
	printf("ft_isdigit: %d\n", ft_isdigit(test));
	printf("isdigit: %d\n", isdigit(test));
}
*/
