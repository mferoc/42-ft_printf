/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:15:20 by mathferr          #+#    #+#             */
/*   Updated: 2020/06/08 21:13:33 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void ft_putchar(const char c)
{
	write(1, &c, 1);
}

static void ft_putstr(const char *str)
{
	while (*str)
		write(1, str++, 1);
}

int ft_printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);
	//ft_putstr(format);
	const char *s = format;
	while (*s)
	{
		ft_putstr(s);
		s = va_arg(ap, const char *);
		format++;
	}
	va_end(ap);
	//free ((void *)s); //apenas free em ponteiros criados com malloc!!!
	return (0);
}

int main(void) {
	ft_putchar('a');
	ft_putchar('\n');
	ft_putstr("abcd\n\0");
	ft_printf("hidsf\n", "sjkfhs\n", "5463563456\n", "sjf\n");
	return (0);
}
