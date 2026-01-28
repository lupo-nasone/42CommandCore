CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g
NAME = phonebook
SRC = main.cpp phonebook.cpp contact.cpp
OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@clear
	@echo "phonebook is compiled: run ./phonebook without arguments"

bonus:

clean:
	@rm -r $(OBJ)
	@clear

fclean: clean
	@rm -r $(NAME)
	@clear

re: fclean all