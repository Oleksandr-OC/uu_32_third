#pragma once
#include <iostream>
#include <string>
using std::string;


namespace Products {
	class Product
	{
	protected:
		string name;
		float price;
		string manufacture;
		int quantity;
		int age;
	public:
		Product();
		Product(string name,
			float price,
			string manufacture,
			int age,
			int quantity);
		virtual ~Product();
		


		string getName() const;
		float getPrice()const;
		string getManufacture() const;
		int getQuantity() const;
		int getAge() const;



		void setName(string Name) ;
		void setPrice(float Price);
		void setManufacture(string Manufacture) ;
		void setQuantity(int quantity);
		void setAge(int Age);



		virtual void show()const = 0;
		virtual float calcPrice()const = 0;
	};

}



