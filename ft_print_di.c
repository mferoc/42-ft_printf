/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:20:18 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/27 16:58:39 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_di(va_list ap, t_formatter *formatter)
{
	int integer;

	integer = va_arg(ap, int);
	if (integer < 0)
		ft_putchar_print_counter(45, &(formatter->printed_len));
	ft_putnbr(integer, &(formatter->printed_len));
}