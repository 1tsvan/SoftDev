//Приходит бабка в европесйкий магазин и говорит дай манки

#pragma once
#include "iostream"
#include "DefaultOperations.h"
class Admin: public DefaultOperations
{
protected:
	std::string firstname_;
	std::string	lastname_;
	std::string	category_;

	void editProduct();
	void deleteProduct();
	void addProduct();
	void BAN();
	void seachUsersOnSite();
	void editRole();
};

