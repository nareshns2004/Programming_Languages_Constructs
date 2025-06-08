CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -g
LDFLAGS = -pthread
LDLIBS = -lboost_system -lboost_thread

# Source files
SERVER_SRC = chatRoom.cpp
CLIENT_SRC = client.cpp

# Object files
SERVER_OBJ = $(SERVER_SRC:.cpp=.o)
CLIENT_OBJ = $(CLIENT_SRC:.cpp=.o)

# Targets
all: chatApp clientApp

chatApp: $(SERVER_OBJ)
	$(CXX) $(LDFLAGS) $(SERVER_OBJ) $(LDLIBS) -o chatApp

clientApp: $(CLIENT_OBJ)
	$(CXX) $(LDFLAGS) $(CLIENT_OBJ) $(LDLIBS) -o clientApp

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o chatApp clientApp
