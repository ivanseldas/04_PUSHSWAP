/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 01:57:28 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/01 19:58:19 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_and_exit(void)
{
	write (1, "Error\n", 6);
	exit (0);
}

void	check_duplicates(int *stack_a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (stack_a[i] == stack_a[j] && i != j)
				error_and_exit();
			j++;
		}
		i++;
	}
}

void	limits_int_check(int *stack_a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((int)stack_a[i] > 2147483647 || (int)stack_a[i] < -214783648)
		{
			error_and_exit();
//			free_stacks(stack_a, stack_b, size_a, size_b);
		}
		i++;
	}
}

void	doublecheck_numbers(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '-')
				error_and_exit();
			if (argv[i][j] == '-' && (argv[i][j + 1] < '0' || \
						argv[i][j + 1] > '9'))
				error_and_exit();
			if (argv[i][j] >= '0' && argv[i][j] <= '9' && argv[i][j + 1] == '-')
				error_and_exit();
			j++;
		}
		i++;
	}
}

void	check_errors(int *stack_a, int size)
{
	check_duplicates(stack_a, size);
	limits_int_check(stack_a, size);
}
