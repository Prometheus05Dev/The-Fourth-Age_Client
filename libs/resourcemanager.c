#include "resourcemanager.h"

void RMG_setBasePath(char *path) {
    basePath = path;
}

void RMG_loadResources() {

}

char *RMG_getType(char *objectName) {
    return "NULL";
}

char *RMG_getTexture(char *objectName) {
    return "NULL";
}

char *RMG_getModel(char *objectName) {
    return "NULL";
}

char *RMG_getAnimation(char *objectName) {
    return "NULL";
}

char *RMG_getShader(char *shaderName) {
    return "NULL";
}

char **getFilesInDir(char *path) {
    char *currentFile;
    char **returnList;

    int numFiles = 0;
    int numLetters = 0;

    DIR *readDir;
    struct dirent *readDirEntry;
    readDir = opendir(path);
    if      (readDir) {
        while       ((readDirEntry = readdir(readDir))) {
            if      (strcmp(readDirEntry->d_name, ".") && strcmp(readDirEntry->d_name, "..")) {
                for     (int i = 0; i < 256; i++) {
                    if      (readDirEntry->d_name[i] != '\0') {
                        numLetters++;
                        currentFile = realloc(currentFile, numLetters * sizeof(char));
                        currentFile[i] = readDirEntry->d_name[i];
                    }
                    else {
                        numFiles++;
                        returnList = realloc(returnList, numFiles * sizeof(char*));
                        returnList[numFiles - 1] = currentFile;
                        numLetters = 0;
                        currentFile = malloc(1 * sizeof(char));
                        break;
                    }
                }
            }
            else {
                closedir(readDir);
            }
        }
    }
    else {
        printf("[ResourceManager]\thas been called with an invalid path!\n");
    }
}
