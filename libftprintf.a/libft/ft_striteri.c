/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armetix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:47:18 by armetix           #+#    #+#             */
/*   Updated: 2022/10/26 12:32:23 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*
void my_function(unsigned int i, char *str)
{
	printf("My function: index = %d and the string is %s\n", i, str);
}

int main()
{
	char str[10] = "Hello.";
	printf("The result is %s\n", str);
	ft_striteri(str, my_function);
	printf("The result is %s\n", str);
	return 0;
}
*/
