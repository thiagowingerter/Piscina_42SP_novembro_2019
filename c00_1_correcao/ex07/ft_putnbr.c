/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:42:10 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/04 20:23:19 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int div_nb;

	div_nb = 0;
	if (nb >= 0)
		div_nb = nb;
	if (nb < 0)
	{
		div_nb = nb * -1;
		ft_putchar('-');
	}
	if (div_nb > 9)
		ft_putnbr(div_nb / 10);
	ft_putchar((div_nb % 10) + '0');
}
