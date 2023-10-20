#include <iostream>
using namespace std;

int main()
{
	int stations, group, price_of_one, price_of_group, money = 0;
	cin >> stations >> group >> price_of_one >> price_of_group;
	if (price_of_one <= price_of_group / (float)group)money = stations * price_of_one;
	else {
		money = floor(stations / group) * price_of_group;
		stations %= group;
		money += min(stations * price_of_one, price_of_group);
	}
	cout << money;
}
