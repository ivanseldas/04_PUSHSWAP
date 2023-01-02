/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:59:10 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/02 17:40:24 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_array(int *stack)
{
	int	i;

	i = 0;
	while (stack[i] != 0)
	{
		printf("%i ", stack[i]);
		i++;
	}
	printf("\n");
}
int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	*stack_a;
	int	*stack_b;
	int	*size_a;
	int	*size_b;

	size = argc - 1;
	stack_a = (int *)malloc(sizeof(int) * size);
	stack_b = (int *)malloc(sizeof(int) * size);
	size_a = (int *)malloc(sizeof(int));
	size_b = (int *)malloc(sizeof(int));
	*size_a = size;
	*size_b = 0;
	stack_and_check(stack_a, argc, argv);
	i = 0;
	printf("STACK_B IS: ");
	while (i < size)
	{
		printf("%i ", stack_b[i]);
		stack_b[i] = 0;
		i++;
	}
	printf("\n");
	printf("size_a = %i\nsize_b = %i\n", *size_a, *size_b);
//	i = 0;
	printf("STACK IS: ");
	print_array(stack_a);
	printf("\n\n");
	if (size == 3)
		sort_3(stack_a, size_a);
	if (size == 5)
		sort_5(stack_a, stack_b, size_a, size_b);
	printf("STACK_A PUSHED IS: ");
	print_array(stack_a);
	printf("-----\n");
	printf("STACK_B IS: ");
	print_array(stack_b);
	free(stack_a);
	free(stack_b);
	free(size_a);
	free(size_b);
	return (0);
}
