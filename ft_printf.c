/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:15:20 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 13:24:12 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format);
		}
		if (*format == '%')
		{
			format++;
			ft_specifier_manager(*format);
		}
		format++;
	}
}

int	main(void) {
	ft_printf("Print a percent sym\t%%\n");
	return (0);
}
