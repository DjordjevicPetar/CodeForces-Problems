#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	char last = 'a', next;
	int total = 0;
	while ((next = getchar()) != '\n')
	{
		int steps = abs(next - last);
		if (steps > 26 - steps)total += 26 - steps;
		else total += steps;
		last = next;
	}
	cout << total;
}
