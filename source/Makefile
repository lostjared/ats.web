
CXX=em++
CXX_FLAGS=-std=c++17 -I./include
LDFLAGS= -lembind
CPP_FILES := $(wildcard *.cpp)
OBJ_FILES := $(addprefix ,$(notdir $(CPP_FILES:.cpp=.o)))
OUTPUT_NAME=../ats.web.js

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c -o $@ $<
  
all: $(OBJ_FILES) 
	$(CXX) $(OBJ_FILES)  -o $(OUTPUT_NAME)  $(LDFLAGS)

clean:
	rm -f *.o 