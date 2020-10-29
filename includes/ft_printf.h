/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 04:42:40 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 15:15:26 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define	FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/* STRUCTS */
typedef struct		s_flag_states
{
	int				state;
	size_t			content;
}					t_flag_states;

typedef struct		s_formatters
{
	int				flag_minus; // possui menos?
	int				flag_zero; // possui zero?
	unsigned int	flags_len; // tamanho entre % e specifier?
	int				star; // possui *?
	int				point; // possui .?
	int				width; // valor do width
	int				precision; // valor do precision (.++)
	unsigned int	printed_len; // qtd de caracteres printados
	unsigned int	fmt_position; // onde estou na string format atualmente
	char			specifier; // armazena o specifier atual
}					t_formatters;

int					ft_printf(const char *format, ...);
/* UTILS */
int					ft_isnum(char c);
void				ft_putstr(const char *s, unsigned int *count);
void				ft_putchar_print_counter(const char c, unsigned int *count);
/* NUMBER CONVERSIONS */
void				ft_putnbr(int n, unsigned int *count);
void				ft_putnbr_u(unsigned int n, unsigned int *count);
void				ft_putnbr_hex(char specifier, size_t hex, unsigned int *count);
/* PRINT MANAGEMENT */
void				ft_print_percent(unsigned int *count);
void				ft_print_p(va_list ap, t_formatters *formater);
void				ft_print_c(va_list ap, t_formatters *formater);
void				ft_print_s(va_list ap, t_formatters *formater);
void				ft_print_u(va_list ap, t_formatters *formater);
void				ft_print_di(va_list ap, t_formatters *formater);
void				ft_print_xX(va_list ap, t_formatters *formater);
void				ft_specifier_manager(va_list ap, t_formatters *formater);

# endif
