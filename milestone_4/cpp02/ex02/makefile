CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g
NAME = fixed
SRC = main.cpp fixed.cpp
OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@clear
	@echo "$(NAME) is compiled: run ./$(NAME) without arguments"

bonus:

clean:
	@rm -f $(OBJ)
	@clear

fclean: clean
	@rm -f $(NAME)

re: fclean all