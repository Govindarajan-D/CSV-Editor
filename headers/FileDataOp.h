#ifndef FILEDATAOP_H
#define FILEDATAOP_H

#include<QString>
#include<fstream>
#include <iostream>

class FileDataOp
{
private:
    std::ofstream output;
public:
    void writeFile(QString fileName, QString *contents);
};

#endif // FILEDATAOP_H
