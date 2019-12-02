//CustomItem.h
//Zachary Friedland 6704415


#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <map>
#include "IceCreamItem.h"


class CustomItem : public IceCreamItem{
public: 
	CustomItem(std::string size);
	void addTopping(std::string topping);
	virtual std::string composeItem();
	virtual double getPrice(){return price;}
	std::string getToppings();
	virtual ~CustomItem(){}
private:
	std::map<std::string, int> toppingMap;
};

#endif
