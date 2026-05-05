//
// made by artimperijaholding-sketch on 05.05.2026 parallel in team..
// adapted/corrected for mine proj. by me
//
#pragma once
#include "Product.h"

namespace Products {
	namespace Sport {
		class SportsEquipment :public Product
		{
		protected:
			string vidSport;
			float weight;
		public:
			SportsEquipment();
			SportsEquipment(string name, float price, string manufacture, int quantity, int age,
				string vidSport, float weight);

			void setVidSport(string vidSport);
			void setWeight(float weight);

			string getVidSport()const;
			float getWeight()const;

			virtual void show()const override;
			virtual float calcPrice()const override;

		};
	}
}



