CXX = icpx
CXXFLAGS = -Wall -Wextra

DFLAGS = $(CXXFLAGS) -O0
RFLAGS = $(CXXFLAGS) -O3 -DNDEBUG

PROGRAM = iterator_algorithm
SRCS = $(wildcard *.cpp)

# $(patsubst "before pattern", "after pattern", "before texts)
# characters at % will be included in after subsitition
DOBJS = $(patsubst %.cpp, Debug/%.o, $(SRCS))
ROBJS = $(patsubst %.cpp, Release/%.o, $(SRCS))

# PHONY -- declear new commands
.PHONY: default debug relese clean

#
# Built-in functions
#
# $@ — The file name of the target.
# $< — The name of the first prerequisite.
# $^ — The names of all prerequisites, separated by spaces.

# new rules: default, debug, release
default: debug
debug: $(PROGRAM)-dbg
release: $(PROGRAM)

$(PROGRAM): Release $(ROBJS)
	$(CXX) $(RFLAGS) -o $@ $(ROBJS)
$(PROGRAM)-dbg: Debug $(DOBJS)
	$(CXX) $(DFLAGS) -o $@ $(DOBJS)

Release/%.o: %.cpp
	$(CXX) -o $@ $(RFLAGS) -c $< 
Debug/%.o: %.cpp
	$(CXX) -o $@ $(DFLAGS) -c $< 

Debug:
	mkdir Debug
Release:
	mkdir Release
clean:
	-rm -rf Debug Release $(PROGRAM) $(PROGRAM)-dbg