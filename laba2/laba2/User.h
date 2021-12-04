#pragma once
#include "iostream"
#include "DefaultOperations.h"


class User:public DefaultOperations
{
protected:
	std::string firstname_;
	std::string	lastname_;
	std::string	category_;


	void orderingProduct();
};

