#include "maths.h"

void MAT_initializeMat4Zero     (mat4 matrix) {
    for     (int i = 0; i <= 3; i++) {
        matrix[i]->x = 0.0f;
        matrix[i]->y = 0.0f;
        matrix[i]->z = 0.0f;
        matrix[i]->w = 0.0f;
    }
}

void MAT_initializeMat4One      (mat4 matrix) {
    for     (int i = 0; i <= 3; i++) {
        matrix[i]->x = 1.0f;
        matrix[i]->y = 1.0f;
        matrix[i]->z = 1.0f;
        matrix[i]->w = 1.0f;
    }
}

void MAT_initializeVec3Zero     (vec3 vector) {
    vector.x = 0.0f;
    vector.y = 0.0f;
    vector.z = 0.0f;
}

void MAT_initializeVec3One      (vec3 vector) {
    vector.x = 1.0f;
    vector.y = 1.0f;
    vector.z = 1.0f;
}

void MAT_initializeVec4Zero     (vec4 vector) {
    vector.x = 0.0f;
    vector.y = 0.0f;
    vector.z = 0.0f;
    vector.w = 0.0f;
}

void MAT_initializeVec4One      (vec4 vector) {
    vector.x = 1.0f;
    vector.y = 1.0f;
    vector.z = 1.0f;
    vector.w = 1.0f;
}
