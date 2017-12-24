#ifndef FILEDATA_H
#define FILEDATA_H

#include<QString>
#include<fstream>
#include<string>
#include<vector>

class FileData
{
public:
    FileData(QString *fileName);
    FileData();
private:
    std::ifstream input;

public:
    std::string strFullData;
    std::vector<std::string> dataArray;
    void initialize(QString *fileName);
};

#endif // FILEDATA_H
