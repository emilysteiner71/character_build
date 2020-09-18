CXX = g++
CXXFLAGS = -Wall -g

all: tracker_test

tracker_test: test.cpp
	$(CXX) $(CXXFLAGS) -o tracker_test $^

run: tracker_test
	./tracker_test

clean:
	rm -f tracker_test