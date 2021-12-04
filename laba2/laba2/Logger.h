#pragma once
#include "iostream"
//����/�����
#define User_LogIn		0
#define User_LogOut		1
// ������������ 
#define Scan_Unit		2
//����������
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

	//������� ������� �������
	void WriteLog();
	void EndLog();
	void OpenForWriting();

	//�������� ������� �������
	std::string FindLog(std::string logTaskName);
	void OpenForReading();
};

