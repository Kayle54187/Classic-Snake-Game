//
// Created by kayle on 1/19/24.
//

#include <iostream>
#include <raylib.h>

using namespace std;

int main(){

    cout<<"Starting Game"<<endl;

    InitWindow(750, 750, "Retro Snake");

    while(!WindowShouldClose()){
        BeginDrawing();
        
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
