//PreMadeItem.h
//Zachary Friedland 6704415

#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem{
public:
	PreMadeItem(std::string name, std::string size);
	virtual double getPrice(){return price;}
	std::string getName(){return name;}
	virtual std::string composeItem();
	virtual ~PreMadeItem(){}
private:
	std::string name;
};

#endif
