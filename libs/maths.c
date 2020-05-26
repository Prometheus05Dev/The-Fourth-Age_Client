#include "maths.h"

void MAT_addVec4            (vec4 *source, vec4 add) {
    source->x   +=  add.x;
    source->y   +=  add.y;
    source->z   +=  add.z;
    source->w   +=  add.w;
}

void MAT_addVec3            (vec3 *source, vec3 add) {
    source->x   +=  add.x;
    source->y   +=  add.y;
    source->z   +=  add.z;
}

void MAT_subVec4            (vec4 *source, vec4 sub) {
    source->x   -=  sub.x;
    source->y   -=  sub.y;
    source->z   -=  sub.z;
    source->w   -=  sub.w;
}

void MAT_subVec3            (vec3 *source, vec3 sub) {
    source->x   -=  sub.x;
    source->y   -=  sub.y;
    source->z   -=  sub.z;
}

void MAT_mulVec4            (vec4 *source, float scalar) {
    source->x   *=  scalar;
    source->y   *=  scalar;
    source->z   *=  scalar;
}

void MAT_mulVec3            (vec3 *source, float scalar) {
    source->x   *=  scalar;
    source->y   *=  scalar;
    source->z   *=  scalar;
}

void MAT_crossVec4          (vec4 *source, vec4 cross) {
    source->x   =   source->y * cross.z - source->z * cross.y;
    source->y   =   source->z * cross.x - source->x * cross.z;
    source->z   =   source->x * cross.y - source->y * cross.x;
}

void MAT_crossVec3          (vec3 *source, vec3 cross) {
    source->x   =   source->y * cross.z - source->z * cross.y;
    source->y   =   source->z * cross.x - source->x * cross.z;
    source->z   =   source->x * cross.y - source->y * cross.x;
}

void MAT_dotVec4            (vec4 *source, vec4 cross) {
    source->x   *=  cross.x;
    source->y   *=  cross.y;
    source->z   *=  cross.z;
}

void MAT_dotVec3            (vec3 *source, vec3 cross) {
    source->x   *=  cross.x;
    source->y   *=  cross.y;
    source->z   *=  cross.z;
}
