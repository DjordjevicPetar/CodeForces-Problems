#include <iostream>
#include <vector>
using namespace std;

void Program() {
	int length;
	long long saved = 0;
	cin >> length;
	vector<int> closed(length), books(length);
	getchar();
	for (int i = 0, temp; i < length; i++)
	{
		temp = getchar() - '0';
		closed[i] = temp;
	}
	for (int i = 0, temp; i < length; i++)
	{
		cin >> temp;
		books[i] = temp;
	}
	if (closed[0])saved += books[0];
	for (int i = 1, last_zero = (closed[i - 1])?0:books[i - 1]; i < length; i++)
	{
		if (closed[i] == 0) {
			last_zero = books[i];
			continue;
		}
		if (!closed[i - 1] && books[i - 1] >= books[i]) {
			saved += books[i - 1];
			closed[i - 1] = 1;
			closed[i] = 0;
			last_zero = books[i];
		}
		else if (last_zero >= books[i]) {
			closed[i] = 0;
			saved += last_zero;
			last_zero = books[i];
		}
		else saved += books[i];
	}
	cout << saved << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)Program();
}