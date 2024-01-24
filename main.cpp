#include <raylib.h>

int main()
{
    InitWindow(300, 300, "testing");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        DrawRectangle(0, 0, 300, 300, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}