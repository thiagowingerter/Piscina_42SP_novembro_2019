/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:12:44 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/03 23:14:37 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_sequence(char imput_1, char imput_2, char imput_3, char imput_4)
{
	if (((imput_1 * 10) + imput_2) < ((imput_3 * 10) + imput_4))
	{
		write(1, &imput_1, 1);
		write(1, &imput_2, 1);
		write(1, " ", 1);
		write(1, &imput_3, 1);
		write(1, &imput_4, 1);
		if (imput_1 == '9' && imput_2 == '8' && imput_4 == '9')
			;
		else
			write(1, ", ", 2);
	}
}

void	ft_repeat(char a1, char a2, char b1, char b2)
{
	while (a1 <= '9')
	{
		while (a2 <= '9')
		{
			while (b1 <= '9')
			{
				while (b2 <= '9')
				{
					print_sequence(a1, a2, b1, b2);
					b2++;
				}
				b2 = '0';
				b1++;
			}
			b1 = '0';
			a2++;
		}
		a2 = '0';
		a1++;
	}
}

void	ft_print_comb2(void)
{
	char a1;
	char a2;
	char b1;
	char b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '1';
	ft_repeat(a1, a2, b1, b2);
}
