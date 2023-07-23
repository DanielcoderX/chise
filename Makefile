CC := gcc
CFLAGS := -Wall -O
LDFLAGS := -lSDL

SRC_DIR := src
BUILD_DIR := build
EXE := $(BUILD_DIR)/emu

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
