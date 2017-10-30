#pragma once

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>//×Ö·û´®string
using namespace std;
class PqFile
{
public:
	PqFile();
	~PqFile();
	string readFile(char* path);
	bool writeFile(char* path,string content);
	int removeFile(char* path);


private:

};

PqFile::PqFile()
{
}

PqFile::~PqFile()
{
}


string PqFile::readFile(char* path)
{
	ifstream inFileStream;
	inFileStream.open(path, ios::in);
	char c;
	string str = "";
	if (inFileStream) {
		while (inFileStream.get(c)) {
			str = str + c;
		}
	}
	inFileStream.close();
	return str;
}
bool PqFile::writeFile(char* path,string content)
{
	ofstream outFileStream;
	outFileStream.open(path, ios::app | ios::out);
	if (outFileStream) {
		outFileStream << content;
		outFileStream.close();
	}
	return true;
}
int PqFile::removeFile(char* path)
{
	return remove(path);
}