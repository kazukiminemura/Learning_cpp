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

$(PROGRAM): Release Release/pch.h.pchi $(ROBJS)
	$(CXX) $(RFLAGS) -o $@ $(ROBJS)
$(PROGRAM)-dbg: Debug Debug/pch.h.pchi $(DOBJS)
	$(CXX) $(DFLAGS) -o $@ $(DOBJS)
	

Debug:
	mkdir Debug
Release:
	mkdir Release

Release/pch.h.pchi: pch_base.h
	$(CXX) $(RFLAGS) -fpch-preprocess -o $@ -c $<
	cp pch_base.h Release/pch.h
Debug/pch.h.pchi: pch_base.h
	$(CXX) $(DFLAGS) -fpch-preprocess -o $@ -c $<
	cp pch_base.h Debug/pch.h

clean:
	-rm -rf Debug Release $(PROGRAM) $(PROGRAM)-dbg