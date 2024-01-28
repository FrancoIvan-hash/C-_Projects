#include "raylib.h"
#include <cstdio>

int main()
{
    int width = 350;
    int height = 200;
    const char *title = "Ivan's window";
    InitWindow(width, height, title);

    while (!WindowShouldClose())
    {
        BeginDrawing();       // setup
        ClearBackground(RED); // clears the canvas (must do this otherwise screen flickers)
        DrawCircle(175, 100, 25, BLUE);
        EndDrawing(); // teardown
    }
}