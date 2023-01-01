/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:34:30 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/01 20:07:37 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_and_check(int *stack_a, int argc, char **argv)
{
	int	i;
	int	size;

	doublecheck_numbers(argc, argv);
	size = argc - 1;
	printf("size is: %i\n", size);
	printf("STACK INITIAL IS:");
	i = 0;
	while (i < size)
	{
//	NO FILTRAR POR ATOI NUMEROS SUPERIORES A MAX INT Y MIN INT		
		stack_a[i] = atoi(argv[i + 1]);
		printf(" %i,", stack_a[i]);
		i++;
	}
	printf("\n");
	check_duplicates(stack_a, size);
	limits_int_check(stack_a, size);
	ft_all_positive(stack_a, size);
}

void	free_stacks(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	free(stack_a);
	free(stack_b);
	free(size_a);
	free(size_b);
	exit (0);
}
