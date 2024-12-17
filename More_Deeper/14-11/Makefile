CXX = icpx
CXXFLAGS = -Wall -Wextra -O0

DFLAGS = $(CXXFLAGS)
RFLAGS = -O3 -DNDEBUG

PROGRAM = precompile
# SRCS = $(wildcard *.cpp)
SRCS = precompile.cpp
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
Release/%.o: %.cpp
	$(CXX) -o $@ $(RFLAGS) -c $< 

Debug/%.o: %.cpp
	$(CXX) -o $@ $(DFLAGS) -c $< 

# new rules: default, debug, release
default: debug
debug: $(PROGRAM)-dbg
release: $(PROGRAM)

$(PROGRAM): Release Release/pch_base.h.pchi $(ROBJS)
	$(CXX) $(RFLAGS) -include Release/pch_base.h -o $@ $(ROBJS)
$(PROGRAM)-dbg: Debug Debug/pch_base.h.pchi $(DOBJS)
	$(CXX) $(DFLAGS) -include Debug/pch_base.h -o $@ $(DOBJS)


Debug:
	mkdir Debug
Release:
	mkdir Release

Release/pch_base.h.pchi: pch_base.h
	$(CXX) $(RFLAGS) -x c++-header -o $@ -c $<
Debug/pch_base.h.pchi: pch_base.h
	$(CXX) $(DFLAGS) -x c++-header -o $@ -c $<
	
clean:
	-rm -rf Debug Release $(PROGRAM) $(PROGRAM)-dbg