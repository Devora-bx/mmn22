CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = myset.c set.c methods_help.c
OBJ = $(SRC:.c=.o)
TARGET = myprogram

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET)
