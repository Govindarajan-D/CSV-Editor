#ifndef FILEDATAIP_H
#define FILEDATAIP_H

#include<QString>
#include<fstream>
#include<string>
#include<vector>

class FileDataIp
{
public:
    FileDataIp(QString *fileName);
    FileDataIp();
private:
    std::ifstream input;

public:
    std::string strFullData;
    std::vector<std::string> dataArray;
    void initialize(QString *fileName);
};

#endif // FILEDATAIP_H