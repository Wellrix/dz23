#include "OrdersSystem.h"
#include "Order.h"
#include <algorithm>
using namespace std;

void OrdersSystem::addOrder(const Order& order)
{
	orders.push_back(order);
}

void OrdersSystem::SortOrdreByTime()
{
	int n = orders.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (orders[j].getCooking() > orders[j + 1].getCooking()) {
				Order temp = orders[j];
				orders[j] = orders[j + 1];
				orders[j + 1] = temp;
			}
		}
	}

}

void OrdersSystem::executeFirstOrder()
{
	if (orders.empty())
	{
		cout << "Order list is empty!\n";
		return;
	}

	cout << "--- Executing Order ---\n";
	orders[0].printOrderInfo();

	orders.erase(orders.begin());
	cout << "Order executed and removed.\n\n";
}

void OrdersSystem::printAllOrders() const
{
	if (orders.empty())
	{
		cout << "No active orders.\n";
		return;
	}

	for (const auto& order : orders)
	{
		order.printOrderInfo();
	}
}
