SRC=AMateria.cpp Ice.cpp main.cpp Cure.cpp Character.cpp MateriaSource.cpp
OBJ=$(SRC:.cpp=.o)
NAME=AMateria
CC=c++
CFLAGS= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp AMateria.hpp Ice.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:	
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re