cmake_minimum_required(VERSION 3.16)
project(The_Fourth_Age C)

set(CMAKE_C_STANDARD 99)

include_directories(libs/)
include_directories(engine/)
include_directories(game/)

add_executable(The_Fourth_Age main.c libs/resourcemanager.c libs/maths.c engine/graphics/object.c engine/graphics/loaders/texture.c engine/graphics/loaders/animation.c engine/graphics/loaders/model.c engine/graphics/loaders/shader.c engine/graphics/camera.c engine/graphics/gamewindow.c engine/graphics/gamewindow.h game/game.c game/game.h game/gameobject.c game/gameobject.h engine/time.c engine/time.h)