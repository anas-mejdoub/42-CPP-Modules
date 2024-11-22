SRC= Harl.cpp main.cpp
OBJ= $(SRC:.cpp=.o)
CC= c++
CFLAGS= -Wall -Wextra -Werror -fsanitize=address -g
NAME= Harl

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Harl.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all