/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:34:30 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 16:17:39 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_and_check(int *stack_a, int argc, char **argv)
{
	int	i;
	int	size;

	if (argc == 2)
		error_and_exit();
	doublecheck_numbers(argc, argv);
	size = argc - 1;
	i = 0;
	while (i < size)
	{
		stack_a[i] = ft_atoi_pushswap(argv[i + 1]);
		i++;
	}
	stack_a[i] = 0;
	check_duplicates(stack_a, size);
	ft_all_positive(stack_a, size);
}

void	free_stacks(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	exit (0);
}

void	fill_0_stack(int *stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack[i] = 0;
		i++;
	}
}

int	ft_size(int *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack[i] != '\0')
		i++;
	return (i);
}
