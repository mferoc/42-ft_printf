/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:18:07 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 16:19:34 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_print_u(va_list ap)
{
	unsigned int natural_num;

	natural_num = va_arg(ap, unsigned int);
	ft_putnbr_u(natural_num);
}