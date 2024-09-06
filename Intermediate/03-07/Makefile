CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

Target = include
INCLUDE = -I./ # to specify user-defined header files's path

SRC = $(Target).cpp
# Header = $(Target).h
# convert .cpp -> .o (pattern substitution)
OBJ = $(SRC:.cpp=.o)

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.

$(Target): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to Build Object Files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	-rm -f $(OBJ) $(Target)
