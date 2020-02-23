CXX = g++ -std=c++11
CXXFLAGS = -Wall -Wno-uninitialized
BINARIES = linkedListTest strTest

all: ${BINARIES}

tests: ${BINARIES}
	./linkedListTest
	./strTest

linkedListTest: linkedListTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

strTest: strTest.o strFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

clean:
	/bin/rm -f $(BINARIES) *.o
