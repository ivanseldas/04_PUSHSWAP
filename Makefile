# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 18:46:59 by ivanisp           #+#    #+#              #
#    Updated: 2023/01/02 14:27:10 by ivanisp          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC	=	gcc

FLAGS	=	-Wall -Werror -Wextra -I.

RM	=	-rm

SOURCES =	./main_test.c \
		./utils_isp/utils.c \
		./utils_isp/utils_all_positive.c \
		./utils_isp/utils_errors.c \
		./movements_isp/push.c \
		./movements_isp/swap.c \
		./sorting_isp/sort_3.c \
		./movements_isp/rotate.c \
		./movements_isp/reverse.c \
		./sorting_isp/already_sorted_check.c \
#		./main_isp.c

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
