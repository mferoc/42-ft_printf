/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_manager.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 04:45:42 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_specifier_manager(char specifier)
{
	if (specifier == 'c')
		ft_putchar('c');
	else if (specifier == 's')
		ft_putchar('x');
	else if (specifier == 'd' || specifier == 'i')
		ft_putchar('d');
	else if (specifier == 'u')
		ft_putchar('u');
	else if (specifier == 'x' || specifier == 'X')
		ft_putchar('x');
	else if (specifier == '%')
		ft_print_percent();
}