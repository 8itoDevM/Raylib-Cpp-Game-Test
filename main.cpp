#include "raylib.h"

int main(){
    int ballX = 400;
    int ballY = 300;
    Color some_color = {20, 160, 133, 255};

    InitWindow(800, 600, "My First game");
    SetTargetFPS(60);

    // GameLoop
    while(WindowShouldClose() == false){
        // 1. Event Handling

        if(IsKeyDown(KEY_RIGHT)){
            ballX += 3;
        } else if(IsKeyDown(KEY_LEFT)){
            ballX -= 3;
        }
        if(IsKeyDown(KEY_UP)){
            ballY -= 3;
        } else if(IsKeyDown(KEY_DOWN)){
            ballY += 3;
        }

        // 2. Updating Positions
               

        // 3. Drawing
        BeginDrawing();
        ClearBackground(some_color);
        DrawCircle(ballX, ballY, 20, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}