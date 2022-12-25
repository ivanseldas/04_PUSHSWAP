/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:57:33 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/25 20:29:39 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<errno.h>

// Stack numbers
int		stack_size(int argc, char **argv);
void	stack_numbers(int *stack_a, int argc, char **argv);
void	free_stacks(int *stack_a, int *stack_b, int *size_a, int *size_b);

// Errors
void	error_and_exit(void);
void	check_duplicates(int *stack_a, int argc);
void	limits_int_check(int *stack_a, int argc);
void	doublecheck_numbers(int argc, char **argv);
void	check_errors(int *stack_a, int argc, char **argv);

// Movements
void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	push_b(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	reverse_operator(int *stack, int *size);
void	reverse_a(int *stack_a, int *size_a);
void	reverse_b(int *stack_b, int *size_b);
void	reverse_ab(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	rotate_operator(int *stack, int *size);
void	rotate_a(int *stack_a, int *size_a);
void	rotate_b(int *stack_b, int *size_b);
void	rotate_ab(int *stack_a, int *stack_b, int *size_a, int *size_b);
void	swap_operator(int *stack, int *size);
void	swap_a(int *stack_a, int *size_a);
void	swap_b(int *stack_b, int *size_b);
void	swap_ab(int *stack_a, int *stack_b, int *size_a, int *size_b);

// Sorting functions
int		already_sorted_check(int *stack_a, int argc);
void	sort_3(int *stack_a, int *stack_b, int *size_a, int *size_b);

#endif
