NAME = easyfind
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJECTS = $(SRC:.cpp=.o)

all: $(OBJECTS)
	$(CPP) $(FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp  easyfind.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all