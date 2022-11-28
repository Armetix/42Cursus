/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:11 by kderhet           #+#    #+#             */
/*   Updated: 2022/10/24 12:07:41 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*memsrc;
	char	*memdest;
	int		i;

	i = 0;
	memsrc = (char *)src;
	memdest = dst;
	if (!memsrc && !memdest)
		return (NULL);
	while (n > 0)
	{
		memdest[i] = memsrc[i];
		i++;
		n--;
	}
	return (dst);
}
/*
int main()
{
	char csrc[] = "Un test, ceci est un test";
	char cdest[100];
	ft_memcpy(cdest, csrc, strlen(csrc)+1);
	printf("Copied string is %s", cdest);

	int isrc[] = {10, 20, 30, 40, 50};
	int n = sizeof(isrc)/sizeof(isrc[0]);
	int idest[n], i;
	ft_memcpy(idest, isrc, sizeof(isrc));
	printf("\nCopied array is ");
	for (i=0; i<n; i++)
    	printf("%d ", idest[i]);
	return 0;
}
*/
