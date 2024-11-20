CC     = gcc
CFLAGS = -Wall -Werror
TARGET = tetris
FILE   = tetris.c

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(FILE)
	$(CC) $(CFLAGS) $(FILE) -o $(TARGET)

clean:
	rm -f ./$(TARGET)
