/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <mathferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:59:19 by mathferr          #+#    #+#             */
/*   Updated: 2020/10/24 18:17:23 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

void	ft_putnbr(int n)
{
	long int big_nb;

	big_nb = n;
	if (big_nb < 0)
	{
		ft_putchar(45);
		big_nb = (big_nb * -1);
	}
	if (big_nb >= 10)
	{
		ft_putnbr(big_nb / 10);
		ft_putchar((big_nb % 10) + '0');
	}
	else
		ft_putchar(big_nb + '0');
}

void	ft_putnbr_u(unsigned int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	else
		ft_putchar(n + '0');
}

void	ft_putnbr_hex(char specifier, size_t hex)
{
	size_t	div;
	int		mod;
	char	c;

	div = hex / 16;
	mod = hex % 16;
	if (div != 0)
		ft_putnbr_hex(specifier, div);
	if (mod < 10)
		c = mod + '0';
	else
	{
		if (specifier == 'x' || specifier == 'p')
			c = 'a' + (mod - 10);
		else if (specifier == 'X')
			c = 'A' + (mod - 10);
	}
	ft_putchar(c);
}