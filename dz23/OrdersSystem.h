#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Order.h"
using namespace std;
class OrdersSystem
{
private:
	vector<Order>orders;

public:
	void addOrder(const Order& order);

	void SortOrdreByTime();

	void executeFirstOrder();

	void printAllOrders() const;
};

