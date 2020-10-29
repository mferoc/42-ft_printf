/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:26:16 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 15:14:48 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_p(va_list ap, t_formatters *formatters)
{
	size_t	adress;

	adress = va_arg(ap, size_t);
	if (!adress)
		ft_putstr("(nil)", &(formatters->printed_len));
	else
	{
		ft_putstr("0x", &(formatters->printed_len));
		ft_putnbr_hex(formatters->specifier , adress, &(formatters->printed_len));
	}
}