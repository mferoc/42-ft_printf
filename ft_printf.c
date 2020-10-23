/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:15:20 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/23 05:36:00 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	while (*format)
	{
		va_arg(ap, int);
		if (*format != '%')
		{
			ft_putchar(*format);
			format++;
		}
		else
		{
			if (*format == '%')
			{
				format++;
				ft_specifier_manager(*format);
			}
		}
	}
}

int main(void) {
	ft_printf("Print a percent sym\t %%\n");
	return (0);
}
