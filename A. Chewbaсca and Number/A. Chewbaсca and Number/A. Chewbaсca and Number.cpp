#include <iostream>
using namespace std;

int main()
{
	int a, flag = 0;
	while ((a = getchar()) != '\n')
	{
		if (a > '4' && (flag || a != '9'))a = '9' - a + '0';
		cout << a - '0';
		flag = 1;
	}
}