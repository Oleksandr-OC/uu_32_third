#include "Clothing.h"

Products::Sport::Clothing::Clothing()
{
	wear_type = "N/D";
	size = -1;
}

Products::Sport::Clothing::Clothing(string name, float price, string manufacture, string wear_type, int size, int recommended_age, int quantity)
	: Product(name, price, manufacture, recommended_age, quantity),wear_type(wear_type),size(size)
{
}

void Products::Sport::Clothing::setWearType(string wear_type) 
{
	this->wear_type = wear_type;
}

string Products::Sport::Clothing::getWearType() const
{
	return wear_type;
}

void Products::Sport::Clothing::setSize(int size) 
{
	this->size = size;
}

int Products::Sport::Clothing::getSize() const
{
	return size;
}

void Products::Sport::Clothing::setRecommendedAge(int recommended_age) 
{
	this->age = recommended_age;
}

int Products::Sport::Clothing::getRecommendedAge() const
{
	return age;
}

void Products::Sport::Clothing::show() const
{
	using namespace std;

	cout << endl << " ◢=====================================◣\n";
	cout << "CLOTHING" << endl;
	cout << "Name: " << name << endl;
	cout << "Price: " << price << endl;
	cout << "Manufacture: " << manufacture << endl;
	cout << "Wear type: " << wear_type << endl;
	cout << "Size: " << size << endl;
	cout << "Recommended age: " << age << endl;
	cout << "Quantity: " << quantity << endl;
	cout << "Total price: " << calcPrice() << endl;
	cout << endl << " ◥=====================================◤\n";
}

float Products::Sport::Clothing::calcPrice() const
{
	float total = price;

	if (size > 50)
	{
		total += price * 0.05;
	}

	if (age < 14)
	{
		total += total * 0.1;
	}

	return total * quantity;
}
