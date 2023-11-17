#all: User Main
	# g++ main.cpp -I /User  -o output

      
#User:
#	@$(MAKE) -C user 

#Main:
#	g++ main.cpp -I /User  -o output


#UnitTest:
#	 cmake -S . -B build
#	 cmake --build build 
#	 cd build && ctest




#clean:
#	rm -r output




TOP_DIR = $(PWD)

USER_DIR := $(TOP_DIR)/User
MAIN_DIR := $(TOP_DIR)/Main
BIN_DIR := $(TOP_DIR)/Bin



INCLUDE_PATH :=
INCLUDE_PATH += -I$(USER_DIR)
INCLUDE_PATH += -I$(MAIN_DIR)





CFLAGS :=
CFLAGS +=$(INCLUDE_PATH)

export TOP_DIR BIN_DIR CFLAGS INCLUDE_PATH

#$(OBJS) = $(patsubst %.o,User/%.o)

all:
	@$(MAKE) -C User -f User.mk
	@$(MAKE) -C Main -f Main.mk
	 g++ Bin/Main.o Bin/User.o  $(CFLAGS)  -o output


clean:
	rm -r output
