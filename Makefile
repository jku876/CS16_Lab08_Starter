CXX = g++ -std=c++11
CXXFLAGS = -Wall -Wno-uninitialized
BINARIES = removeKFromFrontTest strTest sumTest spliceTest

all: ${BINARIES}

tests: ${BINARIES}
	./removeKFromFrontTest
	./spliceTest
	./sumTest
	./strTest

removeKFromFrontTest: removeKFromFrontTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

spliceTest: spliceTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

sumTest: sumTest.o linkedListFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

strTest: strTest.o strFuncs.o tddFuncs.o
	$(CXX) $(CXXFLAGS)  $^ -o $@

clean:
	/bin/rm -f $(BINARIES) *.o
