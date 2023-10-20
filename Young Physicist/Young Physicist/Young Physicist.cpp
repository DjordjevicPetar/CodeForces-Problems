#include <iostream>
using namespace std;

int main()
{
	int number_of_forces, sum_x = 0, sum_y = 0, sum_z = 0, x, y, z;
	cin >> number_of_forces;
	while (number_of_forces--)
	{
		cin >> x >> y >> z;
		sum_x += x;
		sum_y += y;
		sum_z += z;
	}
	if (sum_x || sum_y || sum_z)cout << "NO";
	else cout << "YES";
}
