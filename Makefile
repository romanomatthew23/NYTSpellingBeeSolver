SRC_PATH := $(shell pwd)/.
BIN_PATH := $(SRC_PATH)/bin/.

LDFLAGS_STD	:= -lm -lpthread

LD = g++
LDFLAGS = -std=c++0x -g -fpermissive -I $(SRC_PATH) \
	$(LDFLAGS_STD) \

SRCS := $(SRC_PATH)/src/main.cpp

all: nytSpellingBeeSolver

nytSpellingBeeSolver:
	$(LD) $(SRCS) $(LDFLAGS) -o $(BIN_PATH)/nytSpellingBeeSolver

clean:
	-rm -f *.o $(BIN_PATH)/sendSerial $(BIN_PATH)/receiveSerial \
		$(BIN_PATH)/receiveSerialPacketSingle $(BIN_PATH)/sendSerialPacketSingle \
		$(BIN_PATH)/sendSerialPacketMulti $(BIN_PATH)/receiveSerialPacketMulti
