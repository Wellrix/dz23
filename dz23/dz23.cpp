#include <iostream>
#include <string>
#include <vector>
#include "OrdersSystem.h"
#include "Order.h"

using namespace std;

int Order::totalOrdersCount = 0;
int main()
{
    OrdersSystem system;

    Order o1(20260926, 14.30f, 20, "Pizza Pepperoni", 250); 
    Order o2(20260926, 14.35f, 10, "Burger Deluxe", 180);    
    Order o3(20260926, 14.40f, 5, "French Fries", 90);     
    Order o4(20260926, 14.45f, 3, "Coffee Latte", 60);     

    cout << "=== Adding orders to the system ===\n";
    system.addOrder(o1);
    system.addOrder(o2);
    system.addOrder(o3);
    system.addOrder(o4);

    cout << "\n=== Current Order List ===\n";
    system.printAllOrders();

    cout << "\n=== Sorting orders by cooking time ===\n";
    system.SortOrdreByTime();

    cout << "\n=== Order List After Sorting ===\n";
    system.printAllOrders();

    cout << "\n=== Executing first order ===\n";
    system.executeFirstOrder();

    cout << "=== Remaining Order List ===\n";
    system.printAllOrders();

    return 0;
}