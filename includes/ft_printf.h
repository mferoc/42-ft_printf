/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 04:42:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 16:22:35 by mathferr         ###   ########.fr       */
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
void	ft_putstr(const char *s);
int		ft_printf(const char *format, ...);
void	ft_specifier_manager(char specifier, va_list ap);
/* VARIABLES */
void	ft_print_percent(void);
void	ft_print_c(va_list ap);
void	ft_print_s(va_list ap);
void	ft_print_di(va_list ap);
void	ft_print_u(va_list ap);
void	ft_putnbr(int n);
void	ft_putnbr_u(unsigned int n);

# endif