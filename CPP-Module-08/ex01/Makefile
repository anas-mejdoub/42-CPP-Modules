SRC= main.cpp Span.cpp
OBJ= $(SRC:.cpp=.o)
HEADERS= Span.hpp

CPP= c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME= span

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all