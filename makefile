CXX = g++
CXXFLAGS = -Wall -g -std=c++11

all: tracker_test

tracker_test: *.cpp
	$(CXX) $(CXXFLAGS) -o tracker_test $^

run: tracker_test
	./tracker_test

clean:
	rm -f tracker_test