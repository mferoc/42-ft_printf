/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 04:42:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 19:26:06 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define	FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/* DONE */
void	ft_putchar(const char c);
void	ft_putstr(const char *s, unsigned int *count);
int		ft_printf(const char *format, ...);
void	ft_specifier_manager(char specifier, va_list ap, unsigned int *count);
void	ft_putchar_print_counter(const char c, unsigned int *count);
/* VARIABLES */
void	ft_print_percent(unsigned int *count);
void	ft_print_c(va_list ap, unsigned int *count);
void	ft_print_s(va_list ap, unsigned int *count);
void	ft_print_di(va_list ap, unsigned int *count);
void	ft_print_u(va_list ap, unsigned int *count);
void	ft_print_xX(char specifier, va_list ap, unsigned int *count);
void	ft_print_p(va_list ap, unsigned int *count);
void	ft_putnbr(int n, unsigned int *count);
void	ft_putnbr_u(unsigned int n, unsigned int *count);
void	ft_putnbr_hex(char specifier, size_t hex, unsigned int *count);
void	ft_putnbr_p(size_t hex, unsigned int *count);

# endif