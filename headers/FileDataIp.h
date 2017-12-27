#ifndef FILEDATAIP_H
#define FILEDATAIP_H

#include<fstream>
#include<string>
#include<vector>
#include<QString>

class FileDataIp
{
private:
    std::ifstream input;
public:
    FileDataIp(QString fileName);
    FileDataIp();
    std::string strFullData;
    std::vector<std::string> dataArray;
    void initialize(QString fileName);
};

#endif // FILEDATAIP_H
