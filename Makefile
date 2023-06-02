all:
	g++ main.cpp User.cpp -o output
	cmake -S . -B build
	cmake --build build 
	cd build && ctest


