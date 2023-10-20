#include <iostream>
using namespace std;

int main()
{
	int tests, angle;
	float sides;
	cin >> tests;
	while (tests--)
	{
		cin >> angle;
		sides = 360.0 / (180 - angle);
		cout << ((sides == ceil(sides)) ? "YES" : "NO") << endl;
	}
}