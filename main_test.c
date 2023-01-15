/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:59:10 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 16:09:03 by ivanisp          ###   ########.fr       */
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
//	int	i;
	int	size;
	int	*stack_a;
	int	*stack_b;

	size = argc - 1;
	printf("argc es: %i\n", size);
	stack_a = (int *)malloc(sizeof(int) * size + 1);
	stack_b = (int *)malloc(sizeof(int) * size + 1);
	stack_and_check(stack_a, argc, argv);
	fill_0_stack(stack_b, size);
	printf("Size_a = %i\n", ft_size(stack_a));
	printf("Size_b = %i\n", ft_size(stack_b));
	printf("STACK IS: ");
	print_array(stack_a);
	printf("STACK_A IS: ");
	print_array(stack_a);
	printf("STACK_B IS: ");
	print_array(stack_b);
//	i = 0;
//	while (i < size)
//	{
//		printf("%i ", stack_b[i]);
//		i++;
//	}
//	printf("\n");
//	print_array(stack_b);
//	if (size == 2 && stack_a[0] > stack_a[1])
//		swap_a(stack_a);
	if (already_sorted_check(stack_a) == 1)
		exit (0);
	if (size == 2 && stack_a[0] > stack_a[1])
		rotate_a(stack_a);
	if (size == 3)
		sort_3(stack_a);
	if (size == 4)
		sort_4(stack_a, stack_b);
	if (size == 5)
		sort_5(stack_a, stack_b);
	if (size > 5)
		raddix_sort(stack_a, stack_b);
//	printf("STACK_A IS: ");
//	print_array(stack_a);
//	printf("STACK_B IS: ");
//	print_array(stack_b);
	free_stacks(stack_a, stack_b);
	return (0);
}
