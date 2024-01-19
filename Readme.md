# CLASSIC SNAKE GAME IN C++
<p>Built using C++ , This recreates the classic snake game we all loved and enjoyed</p>

## Getting Started
- Clone the repo
```` shell
git clone https://github.com/Kayle54187/Classic-Snake-Game.git
````
- Install raylib library (Use Make to install or Cmake)
```` shell
git clone https://github.com/raysan5/raylib.git raylib
cd raylib/src/
make PLATFORM=PLATFORM_DESKTOP # To make the static version.
make PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=SHARED # To make the dynamic shared version.
make PLATFORM=PLATFORM_WEB # To make web version.
````
- Compile the Project with raylib library (Directory and user will be different)
```` shell
g++ /home/usr/Directory/Classic-Snake-Game/main.cpp -o main -lraylib
````

#### @Author Christian, 2024
