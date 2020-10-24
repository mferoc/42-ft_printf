/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:07:59 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 19:38:55 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

void	ft_putchar_print_counter(const char c, unsigned int *count)
{
	write(1, &c, 1);
	*count = *count + 1;
}

void	ft_putstr(const char *s, unsigned int *count)
{
	while (*s)
		ft_putchar_print_counter(*s++, count);
		//write(1, s++, 1);
}
