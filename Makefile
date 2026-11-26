CC = gcc
# custom libraries
CFLAGS = -std=c99 -Wall -I./raylib/include -I./judahUI
LDFLAGS = -L./raylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm

# custom libraries 
SRCS = main.c judahUI/judahUI.c

# Default ('make'): fast build WITH console window for debugging
debug:
	$(CC) $(SRCS) -o Node485.exe $(CFLAGS) $(LDFLAGS)

# Release ('make release'): standalone executable WITHOUT console window
release:
	$(CC) $(SRCS) -o Node485.exe $(CFLAGS) $(LDFLAGS) -static -mwindows