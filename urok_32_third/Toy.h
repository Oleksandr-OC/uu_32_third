#pragma once
#include "Product.h"


namespace Products{
	namespace Fun{
		class Toy:public Product{
		protected:
			string material;
		public:
			Toy();
			Toy(string name,
				float price,
				string manufacture,
				int age,
				int quantity,
				string material);
			
			void setMaterial(string material);
			string getMaterial()const;

			virtual void show()const override;
			virtual float calcPrice()const override;


		};
	}
}