/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:03:45 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/05 21:38:04 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int num1;
	int num2;
	int *p1;
	int *p2;

	num1 = 512;
	num2 = 100;
	p1 = &num1;
	p2 = &num2;
	printf("\nvalor de num1 : %d  ....  valor de num2 : %d\n ", num1, num2);
	ft_ultimate_div_mod(p1, p2);
	printf("\n valor apos div num1: %d .. valor apos mod num2: %d\n", *p1, *p2);
	return (0);
}
