/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_manager.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 19:36:15 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_specifier_manager(char specifier, va_list ap, unsigned int *printed) //recebendo ap para imprimir args
{
	if (specifier == 'c')
		ft_print_c(ap, printed);
	else if (specifier == 's')
		ft_print_s(ap, printed);
	else if (specifier == 'p')
		ft_print_p(ap, printed);
	else if (specifier == 'd' || specifier == 'i')
		ft_print_di(ap, printed);
	else if (specifier == 'u')
		ft_print_u(ap, printed);
	else if (specifier == 'x' || specifier == 'X')
		ft_print_xX(specifier, ap, printed);
	else if (specifier == '%')
		ft_print_percent(printed);
}