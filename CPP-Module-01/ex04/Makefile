SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
CC= c++
CFLAGS= -Wall -Wextra -Werror
NAME= Replace

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all