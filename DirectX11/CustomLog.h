// CustomLog.h
#pragma once

#include <string>
#include <fstream>

class CustomLog
{
public:
    CustomLog();
    ~CustomLog();

    void Write(const std::string& message);
    void Open();
    void Close();

private:
    std::ofstream logFile;
    std::string logFilePath;
};
