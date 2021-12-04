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
};

