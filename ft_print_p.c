/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:26:16 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/25 05:52:43 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_p(va_list ap, t_formatter *formatter)
{
	size_t	adress;

	adress = va_arg(ap, size_t);
	if (!adress)
		ft_putstr("(nil)", &(formatter->printed_len));
	else
	{
		ft_putstr("0x", &(formatter->printed_len));
		ft_putnbr_hex(formatter->specifier , adress, &(formatter->printed_len));
	}
}