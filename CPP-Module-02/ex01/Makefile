SRC= Fixed.cpp main.cpp

OBJ= $(SRC:.cpp=.o)

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= Fixed

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all