#include <iostream>
using namespace std;

int main()
{
	long long upper_bound, position;
	cin >> upper_bound >> position;
	if (position > ceil(upper_bound / 2.0))cout << 2 * (position - (long long)ceil(upper_bound / 2.0));
	else cout << 2 * position - 1;
}