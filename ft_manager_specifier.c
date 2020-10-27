/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_specifier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/26 10:34:15 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_specifier_manager(va_list ap, t_formatter *formatter) //recebendo ap para imprimir args
{
	if (formatter->specifier == 'c')
		ft_print_c(ap, formatter);
	else if (formatter->specifier == 's')
		ft_print_s(ap, formatter);
	else if (formatter->specifier == 'p')
		ft_print_p(ap, formatter);
	else if (formatter->specifier == 'd' || formatter->specifier == 'i')
		ft_print_di(ap, formatter);
	else if (formatter->specifier == 'u')
		ft_print_u(ap, formatter);
	else if (formatter->specifier == 'x' || formatter->specifier == 'X')
		ft_print_xX(ap, formatter);
	else if (formatter->specifier == '%')
		ft_print_percent(&(formatter->printed_len));
	else
		ft_putchar_print_counter(formatter->specifier, &(formatter->printed_len));
}