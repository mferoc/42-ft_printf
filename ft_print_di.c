/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:20:18 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/25 05:47:21 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_di(va_list ap, t_formatter *formatter)
{
	int integer;

	integer = va_arg(ap, int);
	ft_putnbr(integer, &(formatter->printed_len));
}