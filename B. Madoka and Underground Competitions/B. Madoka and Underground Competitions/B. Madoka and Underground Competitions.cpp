#include <iostream>
using namespace std;

void row(int size, int spare, int pos_x) {
	pos_x %= spare;
	for (int i = 0; i < size; i++)
	{
		if (i == pos_x) {
			cout << 'X';
			pos_x += spare;
		}
		else cout << '.';
	}
	cout << endl;
}

int main()
{
    int test_cases, size, spare, pos_y, pos_x;
    cin >> test_cases;
	while (test_cases--)
	{ // 2 1 -> 
		cin >> size >> spare >> pos_x >> pos_y;
		while (pos_x < size - spare)pos_x += spare;
		pos_x = pos_x + pos_y - 2;
		pos_x %= size;
		for (int pos_y = 0; pos_y < size; pos_x--, pos_y++)
		{
			if (pos_x < 0)pos_x += size;
			row(size, spare, pos_x);
		}
	}
	return 0;
}