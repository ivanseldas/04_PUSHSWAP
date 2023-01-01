/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:59:10 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/01 19:44:08 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	size;
	int	*stack_a;

	size = argc - 1;
	printf("size in main is: %i\n", size);
	stack_a = (int *)malloc(sizeof(int) * size);
	if (!stack_a)
		return (0);
	stack_and_check(stack_a, argc, argv);
	i = 0;
	printf("STACK IS: ");
	while (i < size - 1)
	{
		printf(" %i,", stack_a[i]);
		i++;
	}
}
