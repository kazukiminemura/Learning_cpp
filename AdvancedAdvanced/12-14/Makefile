CXX = icpx
CXXFLAGS = -Wall -Wextra -O2

debug_release: debug_release.o
	$(CXX) $(CXXFLAGS) -o $@ debug_release.o

debug_release-dgb: debug_release-dgb.o
	$(CXX) $(CXXFLAGS) -o $@ debug_release-dgb.o

# Rule to Build Object Files
debug_release.o: debug_release.cpp
	$(CXX) $(CXXFLAGS) -DNDEBUG -c debug_release.cpp -o $@ 

debug_release-dgb.o: debug_release.cpp
	$(CXX) $(CXXFLAGS) -c debug_release.cpp -o $@ 

clean:
	-rm -f debug_release-dgb.o debug_release.o debug_release debug_release-dgb
