CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

PROGRAM = using
SRCS = $(wildcard *.cpp)
# $(patsubst "before pattern", "after pattern", "before texts)
# characters at % will be included in after subsitition
DOBJS = $(patsubst %.cpp, Debug/%.o, $(SRCS))
ROBJS = $(patsubst %.cpp, Release/%.o, $(SRCS))

# PHOHY -- declear new commands
.PHOHY: default debug relese clean

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.
Release/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -DNDEBUG -c $< -o $@ 

Debug/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

# new rules: default, debug, release
default: debug
debug: $(PROGRAM)-dbg
release: $(PROGRAM)

$(PROGRAM): Release $(ROBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(ROBJS)
$(PROGRAM)-dbg: Debug $(DOBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(DOBJS)

Debug:
	mkdir Debug
Release:
	mkdir Release

clean:
	-rm -rf Debug Release $(PROGRAM) $(PROGRAM)-dbg
