/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:04:17 by sel-kabo          #+#    #+#             */
/*   Updated: 2022/12/08 19:45:12 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int n)
{
	if (n >= 10)
	{
		return (ft_putnbr_uns(n / 10) + ft_putchar(n % 10 + '0'));
	}
	else
		return (ft_putchar(n + '0'));
}
