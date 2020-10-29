/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:14:28 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/29 17:14:55 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}