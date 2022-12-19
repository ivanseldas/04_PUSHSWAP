NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = -rf

SOURCES = 

















OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
