/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:20:18 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 15:14:42 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_di(va_list ap, t_formatters *formatters)
{
	int integer;

	integer = va_arg(ap, int);
	if (integer < 0)
		ft_putchar_print_counter(45, &(formatters->printed_len));
	ft_putnbr(integer, &(formatters->printed_len));
}