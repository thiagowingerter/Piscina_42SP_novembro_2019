/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:23 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/09 18:04:13 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char l)
{
	write(1, &l, 1);
}

void	ft_putstr(char *str)
{
	int contador;

	contador = 0;
	while (str[contador] != '\0')
	{
		ft_putchar((*(str + contador)));
		contador++;
	}
}
