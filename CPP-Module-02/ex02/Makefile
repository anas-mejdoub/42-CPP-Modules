SRC= Fixed.cpp main.cpp

OBJ= $(SRC:.cpp=.o)

CPP= c++
FLAGS= -Wall -Wextra -Werror -std=c++98

NAME= Fixed

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Fixed.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all