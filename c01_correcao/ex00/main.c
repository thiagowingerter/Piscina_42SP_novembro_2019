/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 14:26:25 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/05 15:04:28 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int numero;

	numero = 200;
	printf("O valor inicial de numero e: %d\n", numero);
	ft_ft(&numero);
	printf("O valor agora pegando o ponteiro e: %d", numero);
	return (0);
}
