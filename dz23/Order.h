#pragma once
#include <string>
#include <iostream>
using namespace std;
class Order
{
	int date;
	float time;
	int cooking;
	string description;
	int price;
	int num;
	static int totalOrdersCount;


public:
	Order();
	Order(int date,float time,int cooking,string description,int price);
	~Order();

	int getDate() const;
	float getTime() const;
	int getCooking() const;
	string getDescription() const;
	int getPrice() const;
	int getNum() const;
	static int getTotalOrdersCount();

	void setDate(int date);
	void setTime(int time);
	void setCooking(int cooking);
	void setDescription(string description);
	void setPrice(int price);

	void printOrderInfo() const;



};

