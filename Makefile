# Compiler and flags
CC     = gcc
CFLAGS = -Wall -Werror

# Target executable name
TARGET = tetris

# Source files
SRC    = tetris.c tetrimino_I.c tetrimino_J.c tetrimino_L.c tetrimino_O.c \
         tetrimino_S.c tetrimino_T.c tetrimino_Z.c

# Object files
OBJ    = $(SRC:.c=.o)

# Default rule to build and run
all: $(TARGET)
	./$(TARGET)

# Rule to link object files into the executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Rule to compile each .c file into a .o file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to delete the executable and object files
clean:
	del /q $(OBJ) $(TARGET)
