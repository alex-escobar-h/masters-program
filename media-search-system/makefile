# Compiler and Flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude

# Target
TARGET = media_search

# Directories
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include

# List of object files (inside build/)
OBJS = $(BUILD_DIR)/Book.o $(BUILD_DIR)/Film.o $(BUILD_DIR)/Library.o $(BUILD_DIR)/MediaItem.o $(BUILD_DIR)/Menu.o $(BUILD_DIR)/Periodic.o $(BUILD_DIR)/Video.o $(BUILD_DIR)/main.o

# Build the final executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Individual compilation rules
$(BUILD_DIR)/Book.o: $(SRC_DIR)/Book.cpp $(INCLUDE_DIR)/Book.h $(INCLUDE_DIR)/MediaItem.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Book.cpp -o $(BUILD_DIR)/Book.o

$(BUILD_DIR)/Film.o: $(SRC_DIR)/Film.cpp $(INCLUDE_DIR)/Film.h $(INCLUDE_DIR)/MediaItem.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Film.cpp -o $(BUILD_DIR)/Film.o

$(BUILD_DIR)/Library.o: $(SRC_DIR)/Library.cpp $(INCLUDE_DIR)/Library.h $(INCLUDE_DIR)/Book.h $(INCLUDE_DIR)/Film.h $(INCLUDE_DIR)/Periodic.h $(INCLUDE_DIR)/Video.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Library.cpp -o $(BUILD_DIR)/Library.o

$(BUILD_DIR)/MediaItem.o: $(SRC_DIR)/MediaItem.cpp $(INCLUDE_DIR)/MediaItem.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/MediaItem.cpp -o $(BUILD_DIR)/MediaItem.o

$(BUILD_DIR)/Menu.o: $(SRC_DIR)/Menu.cpp $(INCLUDE_DIR)/Menu.h $(INCLUDE_DIR)/Library.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Menu.cpp -o $(BUILD_DIR)/Menu.o

$(BUILD_DIR)/Periodic.o: $(SRC_DIR)/Periodic.cpp $(INCLUDE_DIR)/Periodic.h $(INCLUDE_DIR)/MediaItem.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Periodic.cpp -o $(BUILD_DIR)/Periodic.o

$(BUILD_DIR)/Video.o: $(SRC_DIR)/Video.cpp $(INCLUDE_DIR)/Video.h $(INCLUDE_DIR)/MediaItem.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/Video.cpp -o $(BUILD_DIR)/Video.o

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/Menu.h
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

# Clean target
clean:
	rm -rf $(BUILD_DIR) $(TARGET)