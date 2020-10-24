/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:15:20 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 16:14:36 by mathferr         ###   ########.fr       */
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
			ft_putchar(*format);
		else if (*format == '%')
		{
			format++;
			ft_specifier_manager(*format, ap);
		}
		format++;
	}
}

int	main(void) {
	//ft_printf("Print a percent sym\t%%\n");
	//ft_printf("Print c: char\t%c\tchar\t%c\n", 'X', 'Y');
	//ft_printf("Print s: str=\t%s\tstr=\t%s\n", "Groot", "I'M GROOT");
	ft_printf("Print d and i: d=\t%d\ti=\t%i\n", -42, 777 - 666);
	return (0);
}
