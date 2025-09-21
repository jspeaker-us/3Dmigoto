// CustomLog.cpp
#include "CustomLog.h"
#include <iostream>

CustomLog::CustomLog()
    : logFilePath("C:\\Users\\speaker\\Desktop\\test.txt")  // 默认路径初始化
{
    // 打开日志文件
    Open();
}

CustomLog::~CustomLog()
{
    // 确保在析构时关闭文件
    Close();
}

void CustomLog::Open()
{
    logFile.open(logFilePath, std::ios::app);  // 以附加模式打开文件

}

void CustomLog::Write(const std::string& message)
{
    if (logFile.is_open())
    {
        logFile << message << std::endl;
    }
}

void CustomLog::Close()
{
    if (logFile.is_open())
    {
        logFile.close();
    }
}
