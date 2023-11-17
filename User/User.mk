

#all:
#	 g++ User.cpp -c $^

#SRC_DIR := .../src
#OBJ_DIR := .../obj
#SRC_FILES := $(wildcard *.cpp)
#OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
#LDFLAGS := ...
#CPPFLAGS := ...
#CXXFLAGS := ...

#main.exe: $(OBJ_FILES)
   #g++ $(LDFLAGS) -o $@ $^

#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
#   g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<


$(BIN_DIR)/User.o:
	g++ User.cpp -c -o $@ $^
