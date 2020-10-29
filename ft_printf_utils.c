/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:07:59 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 16:59:42 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_putchar_print_counter(const char c, unsigned int *count)
{
	write(1, &c, 1);
	*count = *count + 1;
}

void	ft_putstr(const char *s, unsigned int *count)
{
	while (*s)
		ft_putchar_print_counter(*s++, count);
}

int		ft_isnum(char c)
{
	return ((c >= '0' && c <= '9'));
}

int		ft_is_flag(char c)
{
	if (c == '0' || c == '-' || c == '*' || c == '.' || c == ft_isnum(c))
		return (1);
	return (0);
}

int		ft_is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}
