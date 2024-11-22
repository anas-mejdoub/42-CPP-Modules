SRC= Fixed.cpp main.cpp Point.cpp bsp.cpp

OBJ= $(SRC:.cpp=.o)

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= Bsp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Point.hpp Fixed.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all