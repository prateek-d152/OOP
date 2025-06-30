# Compiler and flags
CXX = g++
CXXFLAGS = -g -fdiagnostics-color=always

# Target file
TARGET = demo
SRC = demo.cpp

# Build the target executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Run the executable
run: $(TARGET)
	./$(TARGET)

# Clean up generated files
clean:
	rm -f $(TARGET)