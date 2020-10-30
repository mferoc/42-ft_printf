/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cleaner_managers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 21:34:43 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 21:41:42 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	zero_formatters(t_formatters *formatters) // REFACTOR FUNCTION NAME
{
	formatters->flags_len = 0;
	formatters->flag_minus = 0;
	formatters->flag_zero = 0;
	formatters->star = 0;
	formatters->point = 0;
	formatters->width = 0;
	formatters->precision = 0;
	formatters->specifier = '\0';
	formatters->flags = NULL;
}

void	intial_zero_state(t_formatters *formatters)
{
	formatters->printed_len = 0;
	formatters->fmt_position = 0;
	formatters->flags_len = 0;
}