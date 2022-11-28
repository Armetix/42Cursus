/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:25:03 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/13 11:32:44 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}
/*
int main()
{
    char str[50] = "Bienvenue sur la faille de l'invocateur";
    printf("Before: %s\n", str);
    ft_bzero(str, 15);
    printf("After: %s\n", str);

    return (0);
}
*/
