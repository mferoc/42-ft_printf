/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 14:12:13 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/25 05:47:39 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_s(va_list ap, t_formatter *formatter)
{
	const char *string;

	string = va_arg(ap, const char *);
	if (!string)
		string = "(null)";
	ft_putstr(string, &(formatter->printed_len));
}