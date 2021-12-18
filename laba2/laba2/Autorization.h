#pragma once
#include "iostream"
#include "Settings.h"


class Autorization
{
private:
	std::string email_;
	std::string password_;
public:
	void login();
	void resetPassword();
	bool checkedSignedUp();
	//Ну типа декомпозиция условного оператора, консолидация условного выражения и тд и тп
	//не ну был бы тут какой-то рабочий код я бы изменил, а так зачем :)
};

