//CustomItem.cpp
//Zachary Friedland 6704415

#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>
#include "CustomItem.h"
using namespace std;

CustomItem::CustomItem(std::string size):IceCreamItem(size){
	this->size = size;
	if(size == "small"){
		this->price = 3.00;
	}
	else if(size == "medium"){
		this->price = 5.00;
	}
	else if(size == "large"){
		this->price = 6.50;
	}
	else{
		cout << "Invalid size" << endl;
	}
}

void CustomItem::addTopping(std::string topping){
	if(topping == "")
		return;
	std::map<std::string, int>::iterator it;
	it = toppingMap.find(topping);
	if(it != toppingMap.end()){
		(*it).second++;
		price += .4;
	}
	else{
		toppingMap.insert(std::pair<std::string, int>(topping, 1));
		price += .4;
	}
}

std::string CustomItem::getToppings(){
	ostringstream oss;
	for(std::map<std::string,int>::iterator i = toppingMap.begin();
			i != toppingMap.end(); i++){
		oss << (*i).first << ": " << (*i).second << " oz" << endl;
	}
	return oss.str();
}

std::string CustomItem::composeItem(){
	ostringstream oss;
	oss << "Custom Size: " << size << endl
		<< "Toppings:" << endl << getToppings()
		<< "Price: $" << std::fixed << std::setprecision(2) << price << endl;
	return oss.str();
}


