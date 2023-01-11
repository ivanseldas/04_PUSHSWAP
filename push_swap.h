/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:57:33 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/12 00:25:52 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<errno.h>
# include<stdio.h>

// To remove
void	print_array(int *stack);

// Stack numbers
int		stack_size(int argc, char **argv);
void	stack_and_check(int *stack_a, int argc, char **argv);
void	free_stacks(int *stack_a, int *stack_b);
int		ft_size(int *stack);

// Errors
void	error_and_exit(void);
void	check_duplicates(int *stack_a, int argc);
void	limits_int_check(int *stack_a, int argc);
void	doublecheck_numbers(int argc, char **argv);
void	check_errors(int *stack_a, int size);
void	ft_all_positive(int *stack_a, int size);
void	ft_swap_temp(int *stack_temp, int i);

// Movements
void	push_a(int *stack_a, int *stack_b);
void	push_b(int *stack_a, int *stack_b);
int		*ft_realloc_stack(int *stack, int a);
void	reverse_operator(int *stack);
void	reverse_a(int *stack_a);
void	reverse_b(int *stack_b);
void	reverse_ab(int *stack_a, int *stack_b);
void	rotate_operator(int *stack);
void	rotate_a(int *stack_a);
void	rotate_b(int *stack_b);
void	rotate_ab(int *stack_a, int *stack_b);
void	swap_operator(int *stack);
void	swap_a(int *stack_a);
void	swap_b(int *stack_b);
void	swap_ab(int *stack_a, int *stack_b);

// Sorting functions
int		already_sorted_check(int *stack_a, int argc);
void	sort_3(int *stack_a);
void	sort_4(int *stack_a, int *stack_b);
void	sort_5(int *stack_a, int *stack_b);

#endif
