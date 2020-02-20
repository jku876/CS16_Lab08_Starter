CXX = g++
CXXFLAGS = -Wall -Wno-uninitialized
BINARIES = linkedListTest strTest

all: ${BINARIES}

tests: ${BINARIES}
	./linkedListTest
	./strTest

linkedListTest: linkedListTest.o linkedListFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

strTest: strTest.o strFuncs.cpp
	$(CXX) $(CXXFLAGS)  $^ -o $@

clean:
	/bin/rm -f $(BINARIES) *.o
