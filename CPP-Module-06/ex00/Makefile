SRC= main.cpp ScalarConverter.cpp

OBJ= $(SRC:.cpp=.o)

CC= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

HEADER= ScalarConverter.hpp

NAME= scalarConverter

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all