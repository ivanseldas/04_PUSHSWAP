/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:59:10 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/02 14:31:50 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	*stack_a;
	int	*stack_b;
	int	*size_a;
	int	*size_b;

	size = argc - 1;
	printf("size in main is: %i\n", size);
	stack_a = (int *)malloc(sizeof(int) * size);
	stack_b = (int *)malloc(sizeof(int) * size);
	size_a = (int *)malloc(sizeof(int));
	size_b = (int *)malloc(sizeof(int));
	*size_a = size;
	*size_b = 0;
	stack_and_check(stack_a, argc, argv);
	stack_b = 0;
	i = 0;
	printf("STACK IS: ");
	while (i < size)
	{
		printf(" %i,", stack_a[i]);
		i++;
	}
	printf("\n\n -----");
	if (size == 3)
		sort_3(stack_a, size_a);
	printf("STACK SORTED IS: ");
	i = 0;
	while (i < size)
	{
		printf(" %i,", stack_a[i]);
		i++;
	}
	printf("-----\n");
	free(stack_a);
	free(stack_b);
	free(size_a);
	free(size_b);
}
