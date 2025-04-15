NAME = wordle

COMPILATOR = c++

CFLAGS = -std=c++11 -Wall -Wextra -Werror -I./includes -pedantic -g3 
OFLAGS = -std=c++11 -Wall -Wextra -Werror -I./includes -pedantic -g3 
FILES = main \
		Checker \
		Dictionary \
		Orchestror \
		Player \
		TerminalView \
		Word \

SOURCES = $(foreach f, $(FILES), ./sources/$(f).cpp)
OBJECTS = $(foreach f, $(FILES), ./objects/$(f).o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILATOR) $(CFLAGS) -o $@ $^

./objects/%.o: ./sources/%.cpp
	@mkdir -p $(dir $@)
	$(COMPILATOR) $(OFLAGS) -c $< -o $@

clean:
	rm -rf ./objects/*

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
