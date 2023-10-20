#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << min((int)s.size(), count(s.begin(), s.end(), 'a') * 2 - 1);
}