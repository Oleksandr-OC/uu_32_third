#pragma once
#include "Product.h"

namespace Products {
	namespace Sport {
		class Clothing :public Product {
		protected:
			string wear_type;
			int size;
		public:
			Clothing();
			Clothing(string name,
				float price,
				string manufacture,
				string wear_type,
				int size,
				int recommended_age,
				int quantity);

			
			void setWearType(string wear_type);
			string getWearType()const;

			void setSize(int size);
			int getSize()const;

			void setRecommendedAge(int recommended_age);
			int getRecommendedAge()const;


			virtual void show()const override;
			virtual float calcPrice()const override;

		};
	}
}