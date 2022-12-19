/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 21:34:30 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/12 01:48:36 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	doublecheck(int argc, char **argv)
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
			{
				write (1, "Error\n", 6);
				exit (0);
			}
			if (argv[i][j] == '-' && (argv[i][j + 1] < '0' || argv[i][j + 1] > '9'))
			{
				write (1, "Error\n", 6);
				exit (0);
			}
			if (argv[i][j] >= '0' && argv[i][j] <= '9' && argv[i][j + 1] == '-')
			{
				write (1, "Error\n", 6);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

int	*stack_numbers(int argc, char **argv)
{
	int	i;
	int	*list;

	list = (int *)malloc(sizeof(int) * argc);
	if (!list)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		list[i] = atoi(argv[i + 1]);
		i++;
	}
	list[i] = '\0';
	return (list);
}

int	already_sorted_check(int *stack_a, int argc)
{
	int	i;

	i = argc - 2;
	printf("**La lista tiene <%i> numeros**\n\n", i + 1);
	while (i > 0)
	{
		if (stack_a[i] < stack_a[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	*stack_a;
	int	boolean;

	doublecheck(argc, argv);
	stack_a = stack_numbers(argc, argv);
	boolean = already_sorted_check(stack_a, argc);
	if (boolean == 1)
		printf("SORTED\n");
	else
		printf("..no sorted..\n");
	i = 0;
	while (i < argc - 1)
	{
		printf("%i, ", stack_a[i]);
		i++;
	}
	printf("\n");
	return (0);
}
