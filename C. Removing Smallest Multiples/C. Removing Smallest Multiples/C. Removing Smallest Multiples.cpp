#include <iostream>
#include <string>
using namespace std;

long long Remove(string& str, int num, int len) {
	long long count = 0;
	for (int i = num - 1; i < len; i += num)
	{
		if (str[i] == '0') {
			count++;
			str[i] = '2';
		}
		else if(str[i] == '1') break;
	}
	return count * num;
}

long long Problem() {
	int len;
	long long cost = 0;
	string T;
	cin >> len >> T;
	for (int i = 0; i < len; i++)if(T[i] != '1')cost += Remove(T, i + 1, len);
	return cost;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		cout << Problem() << endl;
	}
}
