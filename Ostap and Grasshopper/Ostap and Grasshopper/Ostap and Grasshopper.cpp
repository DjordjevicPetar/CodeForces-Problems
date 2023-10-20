#include <iostream>
#include <string>
using namespace std;

int main()
{
	int length, jump, grasshopper, target;
	string box;
	cin >> length >> jump >> box;
	grasshopper = box.find("G");
	target = box.find("T");
	if (target < grasshopper)jump = -jump;
	while (target != grasshopper && (target - grasshopper) * jump > 0) {
		if (box[grasshopper] != '#')grasshopper += jump;
		else break;
	}
	cout << ((target == grasshopper) ? "YES" : "NO");
}
