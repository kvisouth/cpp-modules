NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = phonebook.cpp contact.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
.PHONY: all clean fclean re
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME) $(OBJ)
re: fclean all