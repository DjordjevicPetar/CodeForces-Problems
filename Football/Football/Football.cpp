#include <iostream>
#include <string>
using namespace std;

int main()
{
	string positions;
	int consecutive = 0;
	cin >> positions;
	for (char player:positions)
	{
		if ((player == '0' && consecutive >= 0) || (player == '1' && consecutive <= 0))consecutive = 0;
		if (abs(consecutive += (player == '0') ? -1 : 1) == 7)break;
	}
	cout << (abs(consecutive) == 7 ? "YES" : "NO");
}

