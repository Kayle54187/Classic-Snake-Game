//
// Created by kayle on 1/19/24.
//

#include <iostream>
#include <raylib.h>

using namespace std;

Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 24, 255};

int cellSize = 30;
int cellCount = 25;

class Food {
public:
    Vector2 position = {5, 6};

    void Draw() {
        DrawRectangle(position.x * cellSize, position.y * cellSize, cellSize, cellSize, darkGreen);
    }
};


int main() {

    cout << "Starting Game" << endl;

    InitWindow(cellSize * cellCount, cellSize * cellCount, "Retro Snake");

    Food food = Food();

    while (!WindowShouldClose()) {
        BeginDrawing();

        //Drawing
        ClearBackground(green);
        food.Draw();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
