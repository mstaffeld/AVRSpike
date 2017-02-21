CC := gcc
CFLAGS := -std=c99 # -Wall -Werror -g
OBJECTS := $(patsubst %.c,%.o,$(wildcard *.c))

compile: $(OBJECTS)
	$(CC) $(CFLAGS) -o hello $(OBJECTS)
