CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

SRC = $(wildcard ./*.cpp)
Target = $(notdir $(SRC))
# convert .cpp -> .o (pattern substitution)
OBJ = $(notdir $(SRC:.cpp=.o))

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.


all: $(Target)
	echo $(Target) 
	echo $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# $(Target): $(OBJ)
# 	echo $(Target) 
# 	# echo $(OBJ) 
# 	# $(CXX) $(CXXFLAGS) -o $@ $^

# Rule to Build Object Files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	-rm -f $(OBJ) $(Target)
