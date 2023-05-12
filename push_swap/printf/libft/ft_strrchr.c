/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armetix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:29:07 by armetix           #+#    #+#             */
/*   Updated: 2022/10/11 13:17:12 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	printf("strrchr : %s\n", strrchr("Bonjour a tous", 'x'));
	printf("ft_strrchr : %s", ft_strrchr("Bonjour a tous", 'x'));
	return (0);
}*/
