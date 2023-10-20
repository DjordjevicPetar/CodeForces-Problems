#include <iostream>
#include <string>
using namespace std;

int main()
{
    string initial[2];
    int test_cases;
    cin >> initial[0] >> initial[1] >> test_cases;
    while (test_cases--)
    {
        cout << initial[0] << " " << initial[1] << endl;
        int i;
        string killed, target;
        cin >> killed >> target;
        if (initial[i = 0] == killed || initial[i = 1] == killed)initial[i] = target;
    }
    cout << initial[0] << " " << initial[1] << endl;
}

