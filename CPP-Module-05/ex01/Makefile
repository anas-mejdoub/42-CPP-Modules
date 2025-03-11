SRC= main.cpp Bureaucrat.cpp Form.cpp

OBJ= $(SRC:.cpp=.o)

NAME= Form

CPP= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
HPP = Bureaucrat.hpp Form.hpp
all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HPP)
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all