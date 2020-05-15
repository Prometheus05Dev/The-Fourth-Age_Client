cmake_minimum_required(VERSION 3.16)
project(The_Fourth_Age C)

set(CMAKE_C_STANDARD 99)

add_executable(The_Fourth_Age main.c libs/resourcemanager.c libs/matrices.c libs/matrices.h engine/graphics/object.c engine/graphics/object.h engine/graphics/loaders/texture.c engine/graphics/loaders/texture.h engine/graphics/loaders/animation.c engine/graphics/loaders/animation.h engine/graphics/loaders/model.c engine/graphics/loaders/model.h)