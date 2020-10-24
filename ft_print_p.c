/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:26:16 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 18:44:45 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_p(va_list ap)
{
	size_t	adress;

	adress = va_arg(ap, size_t);
	if (!adress)
		ft_putstr("(nil)");
	else
	{
		ft_putstr("0x");
		ft_putnbr_p(adress);
	}
}