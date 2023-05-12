/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:48:19 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/14 13:09:33 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (s1 && s2)
	{
		res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!res)
			return (NULL);
		i = -1;
		while (s1[++i])
		{
			res[i] = s1[i];
		}
		j = 0;
		while (s2[j])
		{
			res[i++] = s2[j];
			j++;
		}
		res[i] = '\0';
		return (res);
	}
	return (NULL);
}
/*
int	main()
{
	printf("%s\n", ft_strjoin("Hello ", "World"));
	return (0);
}
*/
