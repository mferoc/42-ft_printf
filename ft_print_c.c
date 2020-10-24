/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:32:55 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 19:35:20 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_c(va_list ap, unsigned int *count)
{
	char	c;

	c = va_arg(ap, int);
	ft_putchar_print_counter(c, count);
}