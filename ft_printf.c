/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 16:15:20 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 15:19:21 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static void	zero_print_manager(t_formatters *formatters) // REFACTOR FUNCTION NAME
{
	formatters->flags_len = 0;
	formatters->flag_minus = 0;
	formatters->flag_zero = 0;
	formatters->star = 0;
	formatters->point = 0;
	formatters->width = 0;
	formatters->precision = 0;
	formatters->specifier = '\0';
}

static int	flag_discovery(char s, t_formatters *formatters)
{
	if (s == '0' || s == '-' || s == '*' || s == '.' || s == ft_isnum(s))
		return (1);
	return (0);
}

static int build_flags(const char *s, t_formatters *formatters)
{
	unsigned int	flags_len = 0;
	unsigned int	s_index;
	while (s[s_index])
	{
		if (flag_discovery(*s, formatters))
			flags_len++;
		s++;
	}
	return (flags_len);
}

int			ft_printf(const char *format, ...)
{
	va_list		ap;
	t_formatters	formatters;

	if (!format)
		return (-1);
	va_start(ap, format);
	formatters.printed_len = 0;
	formatters.fmt_position = 0;
	while (format[formatters.fmt_position])
	{
		if (format[formatters.fmt_position] != '%')
			ft_putchar_print_counter(format[formatters.fmt_position], &(formatters.printed_len));
		else if (format[formatters.fmt_position] == '%')
		{
			zero_print_manager(&formatters);
			formatters.fmt_position++;
			formatters.specifier = format[formatters.fmt_position];
			ft_specifier_manager(ap, &formatters);
		}
		formatters.fmt_position++;
	}
	va_end(ap);
	return (formatters.printed_len);
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
	// int ret = ft_printf("Print p: p=\t%p\tp=\t%p\tnull=%p\n", &x, &y, NULL);
	// printf("ret = %d\n", ret);
	// printf("OI EU SOU O GOKU\n");
	// int ret_pf_real = printf("Print p: p=\t%p\tp=\t%p\tnull=%p\n", &x, &y, NULL);
	// printf("ret_pf_real = %d\n", ret_pf_real);
	// //ft_printf("%7 % % %% %z %k\n");
	// //printf("OI EU SOU O GOKU\n%7 % % %% %Z %k\n");
	// ft_printf("GROT = %5 % % %k %6t6 %tz %%\n\n");
	// printf("0 = %d\n", ft_isnum('0'));
	// printf("1 = %d\n", ft_isnum('1'));
	// printf("2 = %d\n", ft_isnum('2'));
	// printf("3 = %d\n", ft_isnum('3'));
	// printf("4 = %d\n", ft_isnum('4'));
	// printf("5 = %d\n", ft_isnum('5'));
	// printf("6 = %d\n", ft_isnum('6'));
	// printf("7 = %d\n", ft_isnum('7'));
	// printf("8 = %d\n", ft_isnum('8'));
	// printf("9 = %d\n", ft_isnum('9'));
	// printf("OUTRO = %d\n", ft_isnum('Z'));
	// printf("%d\n", 42);
	int r = ft_printf("s = %s\ts = %s\ts = %s\t s = %s\ts = %s\ts = %s\n", "GROOT", "BATMAN", "I'M BATMAN", "ECOLE42", "PUDIM", "GAMBIARRA");
	int rp = printf("s = %s\ts = %s\ts = %s\t s = %s\ts = %s\ts = %s\n", "GROOT", "BATMAN", "I'M BATMAN", "ECOLE42", "PUDIM", "GAMBIARRA");
	printf("meu = %d\treal = %d\n", r, rp);
	return (0);
}
