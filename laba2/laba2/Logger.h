#pragma once
#include "iostream"
//вход/выход
#define User_LogIn		0
#define User_LogOut		1
// сканирование 
#define Scan_Unit		2
//Обновление
#define Update_Guide	3
#define Update_Tasks	4


class Logger
{
	
protected:
	int logOffset; 
	void WriteTime();
	void WriteString();

public:
	

	void Close();

	//пишущие функции логгера
	void WriteLog();
	void EndLog();
	void OpenForWriting();

	//читающие функции логгера
	std::string FindLog(std::string logTaskName);
	void OpenForReading();
};

