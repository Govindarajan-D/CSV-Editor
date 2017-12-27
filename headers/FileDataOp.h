#ifndef FILEDATAOP_H
#define FILEDATAOP_H

#include<fstream>
#include<iostream>
#include<QString>

class FileDataOp
{
private:
    std::ofstream output;
public:
    int writeFile(QString fileName, QString *contents);
};

#endif // FILEDATAOP_H
