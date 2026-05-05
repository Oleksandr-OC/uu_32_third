#include "Toy.h"

Products::Fun::Toy::Toy()
{
    material = "N/D";
}

Products::Fun::Toy::Toy(string name, float price, string manufacture, int age, int quantity, string material)
    :Product(name, price, manufacture, age, quantity),material(material)
{
}

void Products::Fun::Toy::setMaterial() const
{
    this->material = material;
}

string Products::Fun::Toy::getMaterial() const
{
    return material();
}

void Products::Fun::Toy::show() const
{
    using namespace std;
    cout << endl << " ◢=====================================◣\n";
    cout << "TOY" << endl;
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Manufacture: " << manufacture << endl;
    cout << "Age: " << age << endl;
    cout << "Material: " << material << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total price:" << calcPrice() << endl;
    cout << endl << " ◥=====================================◤\n";

}

float Products::Fun::Toy::calcPrice() const
{
    float total = price;
    if(material == "wood")
    {
        total += price * 0.3;
    }
    if(age < 3)
    {
        total += total * 0.1;
    }
    return total;
}
