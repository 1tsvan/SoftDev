//Приходит бабка в европесйкий магазин и говорит дай манки

#pragma once
#include <string>
#include "iostream"
#include "DefaultOperations.h"
class Admin: public DefaultOperations
{
protected:
	std::string firstname_;
	std::string	lastname_;
	std::string	category_;

bool IsNumber (string strrr) {

	return (strrr.Replace ("0", "").Replace ("1", "").Replace ("2", "").Replace
("3", "").Replace ("4", "").Replace ("5", "").Replace ("6", "").Replace
("7", "").Replace ("8", "").Replace ("9", "").Length == 0);

}


	void editProduct();
	void deleteProduct();
	void addProduct();
	void BAN();
	void seachUsersOnSite();
	void editRole();
};

