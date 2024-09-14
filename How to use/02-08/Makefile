CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

Target = if2
Target2 = if3

SRC = $(Target).cpp
SRC2 = $(Target2).cpp
# convert .cpp -> .o (pattern substitution)
OBJ = $(SRC:.cpp=.o)
OBJ2 = $(SRC2:.cpp=.o)

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.

all: $(Target) $(Target2)

$(Target): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(Target2): $(OBJ2)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to Build Object Files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJ) $(Target)
	-rm -f $(OBJ2) $(Target2)
