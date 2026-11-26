CC = gcc
CFLAGS = -std=c99 -Wall -I./raylib/include
LDFLAGS = -L./raylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm

# Default ('make'): fast build WITH console window for debugging
debug:
	$(CC) main.c -o Node485.exe $(CFLAGS) $(LDFLAGS)

# Release ('make release'): standalone executable WITHOUT console window
release:
	$(CC) main.c -o Node485.exe $(CFLAGS) $(LDFLAGS) -static -mwindows