//
// made by artimperijaholding-sketch on 05.05.2026 parallel in team..
// adapted/corrected for mine proj. by me
// fixed buges 05.05.2026
//
#include "SportsEquipment.h"

Products::Sport::SportsEquipment::SportsEquipment()
{
    vidSport = "No name";
    weight = 0.0f;
}

Products::Sport::SportsEquipment::SportsEquipment(
    string name,
    float price,
    string manufacture,
    int quantity,
    int age,
    string vidSport,
    float weight
)
    : Product(name, price, manufacture, age, quantity),
    vidSport(vidSport),
    weight(weight)
{
}

void Products::Sport::SportsEquipment::setVidSport(string vidSport)
{
    this-> vidSport= vidSport;
}

void Products::Sport::SportsEquipment::setWeight(float weight)
{
    this->weight = weight;
}

string Products::Sport::SportsEquipment::getVidSport() const
{
    return vidSport;
}

float Products::Sport::SportsEquipment::getWeight() const
{
    return weight;
}

void Products::Sport::SportsEquipment::show() const
{
    using namespace std;
    cout << "===================" << endl;
    cout << "\t TOY" << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacture: " << manufacture << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Age: " << age << endl;
    cout << "Vid Sporta: " << vidSport << endl;
    cout << "Weight: " << weight << endl;
    cout << "Total Price: " << calcPrice() << endl;
}

float Products::Sport::SportsEquipment::calcPrice() const
{
    float total = price;
    float weightstandart = 50;

    if (age < 3)
    {
        total += price * 0.1f;
    }

    if (weight > weightstandart)
    {
        float weights = weight - weightstandart;
        total += price * 0.05f * weights;
    }

    return total;
}
