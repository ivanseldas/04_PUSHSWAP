/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:34:30 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/01 18:21:09 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	*size_a;
	int	*size_b;

	size_a = (int *)malloc(sizeof(int));
	size_b = (int *)malloc(sizeof(int));
	stack_a = (int *)malloc(sizeof(int) * stack_size(argc, argv));
	stack_b = (int *)malloc(sizeof(int) * stack_size(argc, argv));

	// Verify malloc works
	if (!stack_a || !stack_b || !size_a || !size_b)
	{
		free_stacks(stack_a, stack_b, size_a, size_b);
		return (0);
	}

	// Set numbers to stack & check errors
	stack_and_check(stack_a, argc, argv);

	// Check if the stack is already sorted
	if (already_sorted_check(stack_a, argc) == 1)
		free_stacks(stack_a, stack_b, size_a, size_b);

	// For stack size = 2
	else if (stack_size(argc, argv) == 2 && stack_a[0] > stack_a[1])
		rotate_stack_a;

	// For stack size = 3
	else if (stack_size(argc, argv) == 3)
		sort_3(stack_a, stack_b, size_a, size_b);

	// For stack size = 5
	else if (stack_size(argc, argv) == 5)
		sort_5(stack_a, stack_b, size_a, size_b);

	// For the remaining stack sizes
	else
		sort_all(stack_a, stack_b, size_a, size_b);

	// Free memory after operating (we just need to print the instructions)
	free_stacks(stack_a, stack_b, size_a, size_b);
	return (0);
}
