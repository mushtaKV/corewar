/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 12:58:16 by kmushta           #+#    #+#             */
/*   Updated: 2017/10/26 12:58:18 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n < 10 && n > -10)
	{
		if (n > -1)
			c = n + 48;
		else
		{
			write(1, "-", 1);
			c = 48 - n;
		}
		write(1, &c, 1);
	}
	else
	{
		if (n < 10)
			c = 48 - n % 10;
		else
			c = n % 10 + 48;
		ft_putnbr(n / 10);
		write(1, &c, 1);
	}
}