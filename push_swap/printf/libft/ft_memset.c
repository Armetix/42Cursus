/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:46:03 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/13 12:04:19 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*dest;

	dest = str;
	while (len > 0)
	{
		*dest = c;
		dest++;
		len--;
	}
	return (str);
}
/*
int main()
{
	char	str[50] = "La SCP facility n'est pas reel.";
	
	printf("\nBefore ft_memset(): %s\n", str);
	ft_memset(str + 16, '/', 17);
	printf("After ft_memset():  %s", str);
	return 0;
}
*/
