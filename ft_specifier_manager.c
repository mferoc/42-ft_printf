/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_manager.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 18:31:51 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_specifier_manager(char specifier, va_list ap) //recebendo ap para imprimir args
{
	if (specifier == 'c')
		ft_print_c(ap);
	else if (specifier == 's')
		ft_print_s(ap);
	else if (specifier == 'p')
		ft_print_p(ap);
	else if (specifier == 'd' || specifier == 'i')
		ft_print_di(ap);
	else if (specifier == 'u')
		ft_print_u(ap);
	else if (specifier == 'x' || specifier == 'X')
		ft_print_xX(specifier, ap);
	else if (specifier == '%')
		ft_print_percent();
}