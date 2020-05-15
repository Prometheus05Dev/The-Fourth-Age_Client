/* This file is responsible for loading PMF files */

#ifndef THE_FOURTH_AGE_MODEL_H
#define THE_FOURTH_AGE_MODEL_H

/* A model structure with all necessary information to construct OpenGL data */
struct Model {
    char *path;                 // The path to the model file
    float *vertices;            // Array of vertices
    float numVertices;          // Number of vertices
    unsigned int *indices;      // Array of indices
    unsigned int numIndices;    // Number of indices
};

/* Offset to have static IDs externally */
int modelNumOffset = 0;

/* List of models to access them quickly by ID */
struct Model *modelList;

/* Function which gets the path of the model
 * returns the ID of the model
 * sets the vertices, indices as well as their counts */
int PMF_loadModel       (char *path, float vertices[], unsigned int indices[], int *numVertices, unsigned int *numIndices);

/* Internal function to load the data of a PMF file */
void loadPMF            (struct Model *currentModel);

#endif //THE_FOURTH_AGE_MODEL_H
