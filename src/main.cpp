#include <iostream>
#include <raylib.h>

int main(int argc, const char * argv[])
{
    std::cout << "resources_path=" << RESOURCES_PATH << std::endl;
    std::cout << "Hello, World!\n";

    SetTargetFPS(30);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 600, "Raylib Test");
    int posX = 30, posY=30;
    int size = 100;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawRectangle(posX, posY, size,size,BLUE);
        DrawText("Hi!!!", 190, 200, 30, RED);
        posX+=1;

        EndDrawing();
    }
    return 0;
}