//PreMadeItem.cpp
//Zachary Friedland 6704415

#include <iostream>
#include <sstream>
#include <iomanip>
#include "PreMadeItem.h"
using namespace std;

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size){
	this->name = name;	
	if(size == "small"){
		this->price = 4.00;
	}
	else if(size == "medium"){
		this->price = 6.00;
	}
	else if(size == "large"){
		this->price = 7.50;
	}
	else{
		cout << "Invalid size" << endl;
	}
}

std::string PreMadeItem::composeItem(){
	std::ostringstream oss;

	oss << "Pre-made Size: " << size << endl
		<< "Pre-made Item: " << name << endl
		<< "Price: $" << std::fixed << std::setprecision(2) << price << endl;
	
	return oss.str();
}

