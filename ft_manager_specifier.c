/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_specifier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 15:44:37 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_specifier_manager(va_list ap, t_formatters *formatters) //recebendo ap para imprimir args
{
	if (formatters->specifier == 'c')
		ft_print_c(ap, formatters);
	else if (formatters->specifier == 's')
		ft_print_s(ap, formatters);
	else if (formatters->specifier == 'p')
		ft_print_p(ap, formatters);
	else if (formatters->specifier == 'd' || formatters->specifier == 'i')
		ft_print_di(ap, formatters);
	else if (formatters->specifier == 'u')
		ft_print_u(ap, formatters);
	else if (formatters->specifier == 'x' || formatters->specifier == 'X')
		ft_print_xX(ap, formatters);
	else if (formatters->specifier == '%')
		ft_print_percent(&(formatters->printed_len));
	/* else
		ft_putchar_print_counter(formatters->specifier, &(formatters->printed_len)); */
}