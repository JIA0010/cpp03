NAME = a.out
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
FLAGS = -Wall -Wextra -Werror  -std=c++98
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

format:
	$(if $(SRCS), clang-format --style=Google -i $(SRCS))

.PHONY: all clean flcean re