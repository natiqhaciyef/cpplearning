#include "iostream"
#include "string"
#include "fstream"
#include "cstdio"
#include "cmath"

using namespace std;

#ifndef CPPLEARNING_FILEMANAGEMENT_H
#define CPPLEARNING_FILEMANAGEMENT_H

class FileManagement {
public:
    string filename;

    FileManagement(string fn, string extension) {
        string tempFileName = fn;
        tempFileName += extension;

        this->filename = tempFileName;
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
        remove(filename.c_str());
    }


    void createFileInSelectedDirectory(string directory) {
        ofstream createFile;
        createFile.open(directory + "/" + filename);
    }


    void updateFile(string additionalData, string removeText) {
        fstream file(filename, ios::in | ios::out); // Open in both read and write mode

        if (!file) {
            cerr << "Error opening file!" << endl;
            return;
        }

        // Read data if needed
        string data;
        getline(file, data);

        size_t positionToRemove = data.find(removeText);

        if (positionToRemove != string::npos) {
            data = data.replace(positionToRemove, removeText.length(), "");
            file.seekp(0);
        }

        // Update data
        data += additionalData;

        // Close the file before truncating
        file.close();

        // Reopen the file in truncation mode
        file.open(filename, ios::out | ios::trunc);

        // Check if the file is successfully opened
        if (!file) {
            cerr << "Error reopening file for truncation!" << endl;
            return;
        }

        // Write updated data
        file << data;

        // Close the file
        file.close();
   }

};


#endif //CPPLEARNING_FILEMANAGEMENT_H
