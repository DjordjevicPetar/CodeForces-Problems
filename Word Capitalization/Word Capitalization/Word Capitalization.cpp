#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c;
	bool first = true;
	while ((c = getchar()) != '\n')
	{
		if (first)printf("%c", toupper(c));
		else printf("%c", c);;
		first = false;
	}
}