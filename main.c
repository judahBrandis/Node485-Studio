#include "raylib.h"
#include "judahUI.h"

// home page, 2D view, 3D view, analysis view
enum {HOME, D2, D3, ANALYSIS}; 

int detectModules = 0;

int main (void) {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE); // makes it so that the window can be stretched 

    // Create window the same size as screen
    InitWindow(800, 450, "Node485 - v0.11");
    SetExitKey(KEY_NULL); // Disables ESC closing the window

    // set FPS
    SetTargetFPS(60);

    // What happens while window is open
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // keep getting new values in case window is stretched
        const int screenWidth = GetMonitorWidth(0);
        const int screenHeight = GetMonitorHeight(0);
        
        // Draw background
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawRectangle(0, 0, screenWidth, 0.05 * screenHeight, LIGHTGRAY);

            createButton(0.01, 0.5, 0.15, BLACK, LIGHTGRAY, "My Button");
        EndDrawing();
    }

    // Remove / deallocate window
    CloseWindow();        // Close window and OpenGL context

    return 0;
}