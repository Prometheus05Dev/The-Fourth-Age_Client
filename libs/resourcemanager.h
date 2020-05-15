/* This file is the resource manager of the game. It gets the base path of the operating system the game
 * is launched with and reads the configuration files of object to return the appropriate path of its texture,
 * animation and model file. For public functions the prefix RMG is used.*/

#ifndef THE_FOURTH_AGE_RESOURCEMANAGER_H
#define THE_FOURTH_AGE_RESOURCEMANAGER_H

/* After the objects first get loaded, they get an internal resource manager ID for faster access to the paths */
char **names;           // The name of the object to retrieve the ID
char **type;            // Contains the type of the object
char **texturePaths;    // The path to the appropriate texture
char **animationPaths;  // The path to the appropriate EAF
char **modelPaths;      // The path to the appropriate PMF

/* The base path of the game assets */
char *basePath;

/* This function sets the base path with the value returned from the console input in main.c */
void RMG_setBasePath        (char *path);

/* To be called upon start, fills in the arrays of paths */
void RMG_loadResources      ();

char *RMG_getType           (char *objectName);

/* Returns the texture path for an object name */
char *RMG_getTexture        (char *objectName);

/* Returns the model path for an object name */
char *RMG_getModel          (char *objectName);

/* Returns the animation path for an object name */
char *RMG_getAnimation      (char *objectName);

#endif //THE_FOURTH_AGE_RESOURCEMANAGER_H
