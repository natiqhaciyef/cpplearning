#include "iostream"
#include "fstream"
#include "cstdio"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_FILEMANAGEMENT_H
#define CPPLEARNING_FILEMANAGEMENT_H

class FileManagement {
public:
    char filename[];

    FileManagement(char filename[]) {
        int fileSize = sizeof(filename) / sizeof(filename[0]);
        for (int i = 0; i < fileSize; ++i) {
            this->filename[i] = filename[i];
        }

        filename[fileSize] = '.';
        filename[fileSize + 1] = 't';
        filename[fileSize + 2] = 'x';
        filename[fileSize + 3] = 't';

    }

    void fileCreator(string description) {
        ofstream MyFile(filename);

        // Write to the file
        MyFile << description;

        // Close the file
        MyFile.close();
    }

    string readFile() {
        string text;
        ifstream MyFile(filename);
        while (getline(MyFile, text)) {
            cout << text;
        }
        MyFile.close();

        return text;
    }


    void removeFile() {
        remove(filename);
    }

    void createFileInSelectedDirectory(string directory){
        ofstream createFile;
        createFile.open(directory + "/" + filename);
    }

};


#endif //CPPLEARNING_FILEMANAGEMENT_H
