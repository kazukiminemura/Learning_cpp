CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

PROGRAM = system
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
Release/%.o: system.cpp
	$(CXX) $(CXXFLAGS) -DNDEBUG -c $< -o $@ 
Debug/%.o: system.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

# new rules: default, debug, release
default: debug
debug: $(PROGRAM)-dbg main_return_value
release: $(PROGRAM) main_return_value

$(PROGRAM): Release Release/system.o
	$(CXX) $(CXXFLAGS) -o $@ Release/system.o
$(PROGRAM)-dbg: Debug Debug/system.o
	$(CXX) $(CXXFLAGS) -o $@ Debug/system.o
main_return_value: main_return_value.o
	$(CXX) $(CXXFLAGS) -o $@ main_return_value.o

Debug:
	mkdir Debug
Release:
	mkdir Release

clean:
	-rm -rf Debug Release $(PROGRAM) $(PROGRAM)-dbg main_return_value main_return_value.o
