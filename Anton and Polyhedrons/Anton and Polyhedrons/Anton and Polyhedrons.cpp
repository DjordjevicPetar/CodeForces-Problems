#include <iostream>
#include <string>
using namespace std;

int main()
{
	int number_of_inputs, number_of_sides = 0;
	string figure;
	cin >> number_of_inputs;
	for (int i = 0; i < number_of_inputs; i++)
	{
		cin >> figure;
		if (figure[0] == 'T')number_of_sides += 4;
		if (figure[0] == 'C')number_of_sides += 6;
		if (figure[0] == 'O')number_of_sides += 8;
		if (figure[0] == 'D')number_of_sides += 12;
		if (figure[0] == 'I')number_of_sides += 20;
	}
	cout << number_of_sides;
}
