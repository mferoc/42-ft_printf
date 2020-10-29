/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:11:47 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 15:15:05 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_xX(va_list ap, t_formatters *formatters)
{
	size_t	hex;

	hex = va_arg(ap, size_t);
	ft_putnbr_hex(formatters->specifier, hex, &(formatters->printed_len));
}