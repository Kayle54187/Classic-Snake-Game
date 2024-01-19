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
    Vector2 position;
    Texture2D texture;

    Food(){
        Image image = LoadImage("Graphics/food.png");
        texture = LoadTextureFromImage(image);
        position = GenerateRandomPosition();
        UnloadImage(image);
    }
    ~Food(){
        UnloadTexture(texture);
    }

    void Draw() {
        DrawTexture(texture,position.x * cellSize, position.y * cellSize, WHITE);
    }

    Vector2 GenerateRandomPosition() {
        float x = GetRandomValue(0, cellCount-1);
        float y = GetRandomValue(0, cellCount-1);
        return Vector2{x, y};
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
