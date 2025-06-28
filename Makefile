CC = gcc
CFLAGS = -Wall
SRC_DIR = src
BIN_DIR = bin
OBJ_DIR = obj
INCLUDE_DIR = include
TESTS_DIR = test

# Selec all src files
SRC_FILES := $(wildcard $(SRC_DIR)/*.c)

# Generate a list of object files to target
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Select all tests files
TEST_FILES := $(wildcard $(TESTS_DIR)/*.c)
TEST_BINS := $(patsubst $(TESTS_DIR)/%.c,$(BIN_DIR)/%, $(TEST_FILES))

# Compile .c file to object code
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(LDFLAGS) -c -I$(INCLUDE_DIR) $< -o $@

# Compile .c files in test to binaries
$(BIN_DIR)/%: $(TESTS_DIR)/%.c
	$(CC) $(CFLAGS) $(LDFLAGS) -I$(INCLUDE_DIR) $(OBJ_FILES) $< -o $@

# Main Target
all:  make_dirs $(OBJ_FILES) $(TEST_BINS)

clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)

make_dirs:
	mkdir -p $(SRC_DIR) $(BIN_DIR) $(INCLUDE_DIR) $(OBJ_DIR) $(TESTS_DIR)