/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kderhet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:26:32 by kderhet           #+#    #+#             */
/*   Updated: 2022/12/20 13:31:30 by kderhet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_search(va_list arg, const char format);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_putpercent(void);
int		ft_hexa_len(unsigned int n);
int		ft_puthexa(unsigned int n, const char format);
int		ft_ptr_len(unsigned int n);
int		ft_putptr(unsigned long long ptr);
int		ft_unsigned_len(unsigned int n);
int		ft_putunsigned(unsigned int n);

void	ft_printstr(char *str);
void	ft_printhexa(unsigned int n, const char format);
void	ft_printptr(unsigned int n);

char	*ft_uitoa(unsigned int n);

#endif
