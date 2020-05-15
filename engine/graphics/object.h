/* Here are the functions to create new objects and delete existing as well as drawing objects.
 * It gets the paths to construct the OpenGL data and necessary information from the ResourceManager
 * It uses the files in loaders/ to create the data.
 * It uses the matrices libraries to provide transform functions*/

#ifndef THE_FOURTH_AGE_OBJECT_H
#define THE_FOURTH_AGE_OBJECT_H

/* An offset which gets changed every time an object gets removed or added to be able
 * to use static IDs for the game objects */
int objectOffset = 0;

/* Contains all the necessary object information and OpenGL data */
struct Object {

};

/* A list of objects for faster access using the ID */
struct Object **objectList;

/* Fills in the Object struct for a new object using the ResourceManager and adds it to objectList
 * Transforms it to the given location
 * Returns the ID of the object
 * Constructs the OpenGL data using loaders
 * changes objectOffset + 1*/
int  OBJ_addObject          (char *name, int x, int y, int z);

/* Draws the object with the given ID by using the OpenGL data in the appropriate struct */
void OBJ_drawObject         (int id);

/* Removes the object with the given ID and frees it from the objectList
 * changes objectOffset - 1*/
void OBJ_removeObject       (int id);

#endif //THE_FOURTH_AGE_OBJECT_H
