#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> a >> b >> c;
        if (a + b + c - 2 * max(max(a, b), c) == 0)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
