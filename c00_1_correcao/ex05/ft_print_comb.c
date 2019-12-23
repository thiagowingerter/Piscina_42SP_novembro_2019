/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 05:50:57 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/03 21:58:24 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_comb(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c == '7' && d == '8')
		;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char centena;
	char dezena;
	char unidade;

	centena = '0';
	dezena = '1';
	unidade = '2';
	while (centena <= '7')
	{
		while (dezena <= '8')
		{
			while (unidade <= '9')
			{
				ft_write_comb(centena, dezena, unidade);
				unidade++;
			}
			unidade = dezena + 2;
			dezena++;
		}
		dezena = centena + 1;
		centena++;
	}
}
