CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g
NAME = megaphone
SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@clear
	@echo "run ./megaphone and add arguments"

bonus:

clean:
	@rm -r $(OBJ)
	@clear

fclean: clean
	@rm -r $(NAME)
	@clear

re: fclean all