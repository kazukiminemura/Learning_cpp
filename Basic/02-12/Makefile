CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

Target = for_array_if
Target2 = for_array_if2
Target3 = for_array_if3

SRC = $(Target).cpp
SRC2 = $(Target2).cpp
SRC3 = $(Target3).cpp
# convert .cpp -> .o (pattern substitution)
OBJ = $(SRC:.cpp=.o)
OBJ2 = $(SRC2:.cpp=.o)
OBJ3 = $(SRC3:.cpp=.o)

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.

all: $(Target) $(Target2) $(Target3)

$(Target): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(Target2): $(OBJ2)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(Target3): $(OBJ3)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to Build Object Files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJ) $(Target)
	-rm -f $(OBJ2) $(Target2)
	-rm -f $(OBJ3) $(Target3)
