SRC= main.cpp Base.cpp A.cpp B.cpp C.cpp 

OBJ= $(SRC:.cpp=.o)

CC= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= dynamic

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


