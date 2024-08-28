CC = g++
Target = variables

SRC = $(Target).cpp
OBJ = $(SRC:.c=.o)

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.

$(Target): $(OBJ)
	$(CC) -o $@ $^

# Object Files
%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm $(Target)
