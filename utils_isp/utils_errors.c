/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 01:57:28 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/14 23:00:38 by ivanisp          ###   ########.fr       */
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
