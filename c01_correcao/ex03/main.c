/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:16:11 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/05 20:40:50 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int divisao;
	int resto;
	int *thi;
	int *bih;

	divisao = 0;
	resto = 0;
	thi = &divisao;
	bih = &resto;
	printf("ponteiros antes da funcao *thi : %d ... *bih = %d\n", *thi, *bih);
	ft_div_mod(105, 10, thi, bih);
	printf("valor de divisao : %d ... valor de resto : %d", divisao, resto);
	return (0);
}
