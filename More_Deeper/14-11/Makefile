CXX = icpx
# CXX = g++
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

# new rules: default, debug, release
default: debug
debug: $(PROGRAM)-dbg
release: $(PROGRAM)

$(PROGRAM): Release Release/gen_pch.h.pchi $(ROBJS)
	$(CXX) $(RFLAGS) -o $@ $(ROBJS)
$(PROGRAM)-dbg: Debug Debug/gen_pch.h.pchi $(DOBJS)
	$(CXX) $(DFLAGS) -o $@ $(DOBJS)

Release/%.o: %.cpp
	$(CXX) -o $@ $(RFLAGS) -include Release/gen_pch.h -c $< 
Debug/%.o: %.cpp
	$(CXX) -o $@ $(DFLAGS) -include Debug/gen_pch.h -c $< 

Debug:
	mkdir Debug
Release:
	mkdir Release

Release/gen_pch.h.pchi: pch_base.h
	$(CXX) $(RFLAGS) -x c++-header -o $@ -c $<
	touch Release/gen_pch.h
Debug/gen_pch.h.pchi: pch_base.h
	$(CXX) $(DFLAGS) -x c++-header -o $@ -c $<
	touch Debug/gen_pch.h
	
clean:
	-rm -rf Debug Release $(PROGRAM) $(PROGRAM)-dbg