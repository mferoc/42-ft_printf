/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_manager.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 05:00:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/23 05:34:01 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_specifier_manager(char specifier)
{
	if (specifier == 'c')
		/**/
	if (specifier == 's')
		/**/
	if (specifier == 'd' || specifier == 'i')
		/**/
	if (specifier == 'u')
		/**/
	if (specifier == 'x' || specifier == 'X')
		/**/
	if (specifier == '%')
		ft_print_percent();
	return (NULL);
}