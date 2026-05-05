#include "Product.h"

Products::Product::Product()
{
    // N/D = not defined
    name = "N/D";
    price = 0.0;
    manufacture = "N/D"; 
    age = 0;
    quantity = 0;
}

Products::Product::Product(string name, float price, string manufacture, int age, int quantity)
{
    this->name = name;
    this->price = price;
    this->manufacture = manufacture;
    this->age = age;
    this->quantity = quantity;
}

Products::Product::~Product()
{
}

string Products::Product::getName() const
{
    return name;
}

float Products::Product::getPrice() const
{
    return price;
}

string Products::Product::getManufacture() const
{
    return manufacture;
}

int Products::Product::getQuantity() const
{
    return quantity;
}

int Products::Product::getAge() const
{
    return age;
}


void Products::Product::setName(string name)
{
    this->name = name;
}

void Products::Product::setPrice(float price)
{
    this->price = price;
}

void Products::Product::setManufacture(string manufacture)
{
    this->manufacture = manufacture;
}

void Products::Product::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void Products::Product::setAge(int age)
{
    this->age = age;
}
