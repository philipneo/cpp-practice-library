CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
BUILD_DIR = build
TARGET = $(BUILD_DIR)/practice

all: $(TARGET)

$(TARGET): src/main.cpp
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) src/main.cpp -o $(TARGET)

clean:
	rm -rf $(BUILD_DIR) practice-log.txt

.PHONY: all clean
