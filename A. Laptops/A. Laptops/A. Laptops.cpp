#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Laptop {
public:
	int price, quality;

	Laptop() {

	}

	Laptop(int price, int quality) {
		Laptop::price = price;
		Laptop::quality = quality;
	}
	bool operator<(const Laptop &second) const{
		if (price == second.price)return quality < second.quality;
		return price < second.price;
	}
	bool operator>(const Laptop &second) const {
		if (price == second.price)return quality > second.quality;
		return price > second.price;
	}
};

int main()
{
	int num_of_laptops;
	vector<Laptop> laptops;
	Laptop temp;
	cin >> num_of_laptops;
	laptops.reserve(num_of_laptops);
	for (int i = 0, price, quality; i < num_of_laptops; i++)
	{
		cin >> price >> quality;
		temp.price = price;
		temp.quality = quality;
		laptops.push_back(temp);
	}
	sort(laptops.begin(), laptops.end());
	temp = laptops[0];
	for (int i = 0; i < num_of_laptops; i++)
	{
		if (temp.price < laptops[i].price && temp.quality > laptops[i].quality) {
			cout << "Happy Alex";
			return 0;
		}
		if (temp.quality < laptops[i].quality)temp = laptops[i];
	}
	cout << "Poor Alex";
}
