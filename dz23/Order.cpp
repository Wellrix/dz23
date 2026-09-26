#include "Order.h"

Order::Order()
{
    date = 0;
    time = 0;
    cooking = 0;
    description = "";
    price = 0;
    totalOrdersCount++;
    num = totalOrdersCount;
    
}

Order::Order(int date, float time, int cooking, string description, int price)
{
    this->date = date;
    this->time = time;
    this->cooking = cooking;
    this->description = description;
    this->price = price;

    totalOrdersCount++;
    this->num = totalOrdersCount;

}

Order::~Order()
{
    totalOrdersCount--;
}

int Order::getDate() const
{
    return date;
}

float Order::getTime() const
{
    return time;
}

int Order::getCooking() const
{
    return cooking;
}

string Order::getDescription() const
{
    return description;
}

int Order::getPrice() const
{
    return price;
}

int Order::getNum() const
{
    return num;
}

int Order::getTotalOrdersCount()
{
    return totalOrdersCount;
}

void Order::setDate(int date)
{
    this->date = date;
}

void Order::setTime(int time)
{
    if (time >= 0) {
        this->time = time;
    }
}

void Order::setCooking(int cooking)
{
    if (cooking >= 0) {
        this->cooking = cooking;
    }
}

void Order::setDescription(string description)
{
    this->description = description;
}

void Order::setPrice(int price)
{
    if (price >= 0) {
        this->price = price;

    }
}

void Order::printOrderInfo() const
{
    cout << "Order Date: " << date << endl
        << "Order time: " << time << endl
        << "Duration of order preparation: " << time << endl
        << "Order description: " << description << endl
        << "Price: " << price << endl
        << "Order number: " << num << endl
        << "-------------------------------------------" << endl;
        
}
