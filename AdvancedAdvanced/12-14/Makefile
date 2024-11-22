CXX = icpx
CXXFLAGS = -Wall -Wextra -O2


# Rule to Build Object Files
Release/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -DNDEBUG -c $< -o $@ 

Debug/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

debug_release: Release Release/debug_release.o
	$(CXX) $(CXXFLAGS) -o $@ Release/debug_release.o

debug_release-dgb: Debug Debug/debug_release.o
	$(CXX) $(CXXFLAGS) -o $@ Debug/debug_release.o

Debug:
	mkdir Debug
Release:
	mkdir Release

clean:
	-rm -rf Debug Release debug_release debug_release-dgb
