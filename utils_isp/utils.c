/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:34:30 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/30 21:04:19 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	stack_size(int argc, char **argv)
{
	return (argc - 1);
}

void	stack_numbers(int *stack_a, int argc, char **argv)
{
	int	i;
	int	size;

	doublecheck_numbers(argc, argv);
	size = stack_size(argc, argv);
	i = 0;
	while (i < size - 1)
	{
		stack_a[i] = atoi(argv[i + 1]);
		i++;
	}
}

void	free_stacks(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	free(stack_a);
	free(stack_b);
	free(size_a);
	free(size_b);
	exit (0);
}
