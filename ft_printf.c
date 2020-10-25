/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:15:20 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/25 05:56:57 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static void	start_print_manager(t_formatter *formatter)
{
	formatter->flag_minus = 0;
	formatter->flag_zero = 0;
	formatter->flag_star = 0;
	formatter->flag_point = 0;
	formatter->width = 0;
	formatter->precision = 0;
	formatter->printed_len = 0;
	formatter->specifier = '\0';
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_formatter	formatter;

	if (!format)
		return (-1);
	va_start(ap, format);
	start_print_manager(&formatter);
	while (*format)
	{
		if (*format != '%')
			ft_putchar_print_counter(*format, &(formatter.printed_len));
		else if (*format == '%')
		{
			formatter.specifier = '\0';
			format++;
			formatter.specifier = *format;
			ft_specifier_manager(ap, &formatter);
		}
		format++;
	}
	va_end(ap);
	return (formatter.printed_len);
}

int	main(void) {
	//ft_printf("Print a percent sym\t%%\n");
	//ft_printf("Print c: char\t%c\tchar\t%c\n", 'X', 'Y');
	//ft_printf("Print s: str=\t%s\tstr=\t%s\n", "Groot", "I'M GROOT");
	//ft_printf("Print d and i: d=\t%d\ti=\t%i\n", -42, 777 - 666);
	//ft_printf("Print u: u=\t%u\tinvalid u=\t%u\n", 42, -666);
	//printf("OI EU SOU O GOKU\nPrint u: u=\t%u\tinvalid u=\t%u\n", 42, -666);
	//ft_printf("Print xX: x=\t%x\tX=\t%X\t0=\t%x\n", 666, 666, 0);
	//printf("OI EU SOU O GOKU\nPrint xX: x=\t%x\tX=\t%X\t0=\t%x\n", 666, 666, 0);
	int x = 0;
	int y = 0;
	//ft_printf("Print p: p=\t%p\tp=\t%p\tnull=%p\n", &x, &y, NULL);
	//printf("OI EU SOU O GOKU\nPrint p: p=\t%p\tp=\t%p\tnull=%p\n", &x, &y, NULL);
	//printf("Print s: str=\t%s\tstr=\t%s\tnull=%s\n", "Groot", "I'M GROOT", NULL);
	//ft_printf("Print s: str=\t%s\tstr=\t%s\tnull=%s\n", "Groot", "I'M GROOT", NULL);
	int ret = ft_printf("Print p: p=\t%p\tp=\t%p\tnull=%p\n", &x, &y, NULL);
	printf("ret = %d\n", ret);
	printf("OI EU SOU O GOKU\n");
	int ret_pf_real = printf("Print p: p=\t%p\tp=\t%p\tnull=%p\n", &x, &y, NULL);
	printf("ret_pf_real = %d\n", ret_pf_real);
	return (0);
}
