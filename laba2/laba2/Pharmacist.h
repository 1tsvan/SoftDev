#pragma once
#include "iostream"
#include "DefaultOperations.h"
class Pharmacist: public DefaultOperations
{
protected:
	std::string firstname_;
	std::string	lastname_;
	std::string	category_;

protected:
	void realizationOrderingProduct();
};

