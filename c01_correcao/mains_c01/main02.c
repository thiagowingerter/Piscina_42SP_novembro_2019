/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:31:01 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/05 19:46:04 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int num1;
	int num2;

	num1 = 10;
	num2 = 50;
	printf("\nnumero inicial de num1 : %d\n ", num1);
	printf("\nnumero inicial de num2 : %d\n ", num2);
	ft_swap(&num1, &num2);
	printf("\n numero apos swap num1 : %d\n", num1);
	printf("\n numero apos swap num2 : %d\n", num2);
	return (0);
}
