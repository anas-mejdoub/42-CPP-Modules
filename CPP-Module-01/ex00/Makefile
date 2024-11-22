SRC= main.cpp Zombie.cpp randomChump.cpp newZombie.cpp
OBJ=$(SRC:.cpp=.o)
CC=c++
CFLAGS=-Wall -Wextra -Werror

NAME=Zombie

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp Zombie.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all