#include "headers/FileDataOp.h"

int FileDataOp::writeFile(QString fileName, QString *contents){
    output.open(fileName.toUtf8().constData(), std::ios::out | std::ios::trunc);
    output<<contents->toUtf8().constData();
    output.flush();
    output.close();
    return output.good();
}
