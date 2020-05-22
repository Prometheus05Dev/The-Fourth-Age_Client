#ifndef THE_FOURTH_AGE_MATHS_H
#define THE_FOURTH_AGE_MATHS_H

typedef struct vec3 {
    float x;
    float y;
    float z;
} vec3;

typedef struct vec4 {
    float x;
    float y;
    float z;
    float w;
} vec4;

typedef vec4 mat4[3][3];

void MAT_initializeMat4Zero         (mat4 matrix);

void MAT_initializeMat4One          (mat4 matrix);

void MAT_initializeVec3Zero         (vec3 vector);

void MAT_initializeVec3One          (vec3 vector);

void MAT_initializeVec4Zero         (vec4 vector);

void MAT_initializeVec4One          (vec4 vector);

#endif //THE_FOURTH_AGE_MATHS_H
