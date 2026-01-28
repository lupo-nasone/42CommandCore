CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g
NAME = BraiiiiiiinnnzzzZ
SRC = zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME):$(OBJ)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	@clear
	@echo "Zombieeee : run ./BraiiiiiiinnnzzzZ without arguments"

bonus:

clean:
	@rm -r $(OBJ)
	@clear

fclean: clean
	@rm -r $(NAME)
	@clear

re: fclean all