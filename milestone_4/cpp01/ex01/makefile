CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g
NAME = horde
SRC = main.cpp zombie.cpp zombieHorde.cpp
OBJ = ${SRC:.cpp=.o}

all : $(NAME)

$(NAME):$(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@clear
	@echo "$(NAME) is compiled: run ./$(NAME) without arguments"

bonus:

clean:
	@rm -r $(OBJ)
	@clear

fclean: clean
	@rm -r $(NAME)
	@clear

re: fclean all