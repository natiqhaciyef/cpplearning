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
    string filename ;

    FileManagement(string fn) {
        string tempFileName = fn;
        tempFileName += ".txt";

        this -> filename = tempFileName;
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

    void updateFile(string additionalData, string removeData) {
        fstream myFile(filename, fstream::in | fstream::out);
        if (!myFile.is_open()) {
            cout << "File opening error occurred" << endl;
        }

        myFile.seekg(0, ios::beg);

        string content;
        getline(myFile, content);
        content = "Updated: " + content + additionalData;

        size_t pos = content.find(removeData);
        if (pos == string::npos) {
            content.replace(pos, removeData.length(), "");
        }

        myFile.seekp(0, ios::beg);
        myFile << content;
        myFile.close();
    }


    void createFileInSelectedDirectory(string directory) {
        ofstream createFile;
        createFile.open(directory + "/" + filename);
    }

};


#endif //CPPLEARNING_FILEMANAGEMENT_H
