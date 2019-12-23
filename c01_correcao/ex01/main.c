/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 15:15:26 by tcampos-          #+#    #+#             */
/*   Updated: 2019/12/07 17:54:59 by tcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int numero;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	numero = 200;
	printf("\n/**************************************\\\n");
	printf(" 1 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr = &numero;
	printf("Endereco do ponteiro ptr: %p \n...\n", &ptr);
	printf("Endereco ao qual o ponteiro ptr esta apontando: %p \n...\n", ptr);
	printf("valor do ponteiro ptr %d\n ", *ptr);
	printf("\n/**************************************\\\n");
	printf(" 2 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr2 = &ptr;
	printf("Endereco do ponteiro ptr2: %p \n...\n", &ptr2);
	printf("Endereco ao qual o ponteiro ptr2 esta apontando: %p \n...\n", ptr2);
	printf("valor do ponteiro ptr2 %d\n ", **ptr2);
	printf("\n/**************************************\\\n");
	**ptr2 = 50;
	printf(" 3 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr3 = &ptr2;
	printf("Endereco do ponteiro ptr3: %p \n...\n", &ptr3);
	printf("Endereco ao qual o ponteiro ptr3 esta apontando: %p \n...\n", ptr3);
	printf("valor do ponteiro ptr3 %d\n ", ***ptr3);
	printf("\n/**************************************\\\n");
	printf(" 4 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr4 = &ptr3;
	printf("Endereco do ponteiro ptr4: %p \n...\n", &ptr4);
	printf("Endereco ao qual o ponteiro ptr4 esta apontando: %p \n...\n", ptr4);
	printf("valor do ponteiro ptr4 %d\n ", ****ptr4);
	printf("\n/**************************************\\\n");
	printf(" 5 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr5 = &ptr4;
	printf("Endereco do ponteiro ptr5: %p \n...\n", &ptr5);
	printf("Endereco ao qual o ponteiro ptr5 esta apontando: %p \n...\n", ptr5);
	printf("valor do ponteiro ptr5 %d\n ", *****ptr5);
	printf("\n/**************************************\\\n");
	printf(" 6 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr6 = &ptr5;
	printf("Endereco do ponteiro ptr6: %p \n...\n", &ptr6);
	printf("Endereco ao qual o ponteiro ptr6 esta apontando: %p \n...\n", ptr6);
	printf("valor do ponteiro ptr6 %d\n ", ******ptr6);
	printf("\n/**************************************\\\n");
	printf(" 7 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr7 = &ptr6;
	printf("Endereco do ponteiro ptr7: %p \n...\n", &ptr7);
	printf("Endereco ao qual o ponteiro ptr7 esta apontando: %p \n...\n", ptr7);
	printf("valor do ponteiro ptr7 %d\n ", *******ptr7);
	printf("\n/**************************************\\\n");
	printf(" 8 ponteiro \n\n");
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	ptr8 = &ptr7;
	printf("Endereco do ponteiro ptr8: %p \n...\n", &ptr8);
	printf("Endereco ao qual o ponteiro ptr8 esta apontando: %p \n...\n", ptr8);
	printf("valor do ponteiro ptr8 %d\n ", ********ptr8);
	printf("\n/**************************************\\\n");
	printf(" 9 ponteiro \n\n");
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	printf("Valor de numero: %d \n...\n", numero);
	printf("Endereco da var numero: %p \n...\n", &numero);
	printf("Endereco do ponteiro ptr9: %p \n...\n", &ptr9);
	printf("Endereco ao qual o ponteiro ptr9 esta apontando: %p \n...\n", ptr9);
	printf("valor do ponteiro ptr9 %d\n ", *********ptr9);
	return (0);
}
