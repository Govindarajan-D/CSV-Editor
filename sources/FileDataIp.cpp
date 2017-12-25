#include "headers/FileDataIp.h"


FileDataIp::FileDataIp(){
}

FileDataIp::FileDataIp(QString *fileName)
{
    input.open(fileName->toUtf8().constData());
    strFullData.assign((std::istreambuf_iterator<char>(input)), (std::istreambuf_iterator<char>()));
    input.close();
}
void FileDataIp::initialize(QString* fileName){
    strFullData = "";
    std::ifstream toRead(fileName->toUtf8().constData());

    if(toRead){
        std::string line;
        while(std::getline(toRead,line)){
            dataArray.push_back(line);
            strFullData = strFullData + line + "\n";
        }
        //Done to remove extra next line at the end
        strFullData.erase(strFullData.length()-1);
    }
    else{
        //Handle errors here
    }
}
