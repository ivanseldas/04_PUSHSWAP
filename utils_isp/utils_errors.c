/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 01:57:28 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/25 19:44:33 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_and_exit(void)
{
	write (1, "Error\n", 6);
	exit (0);
}

void	check_duplicates(int *stack_a, int argc)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = argc - 2;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (stack_a[i] == stack_a[j] && i != j)
			{
				write (1, "Error\n", 6);
				free_stacks(stack_a, stack_b, size_a, size_b);
			}
			j++;
		}
		i++;
	}
}

void	limits_int_check(int *stack_a, int argc)
{
	int	i;

	i = argc - 2;
	while (i > 0)
	{
		if (stack_a[i] > 2147483647 || stack_a[i] < -214783648)
		{
			write (1, "Error\n", 6);
			free_stacks(stack_a, stack_b, size_a, size_b);
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

void	check_errors(int *stack_a, int argc, char **argv)
{
	doublecheck_numbers(argc, argv);
	check_duplicates(stack_a, argc);
	limits_int_check(stack_a, argc);
}
