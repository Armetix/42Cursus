/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:40:20 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/26 12:35:18 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main()
{
	int	test = ' ';
	printf("ft_isprint: %d\n", ft_isprint(test));
	printf("isprint: %d\n", isprint(test));
}
*/
