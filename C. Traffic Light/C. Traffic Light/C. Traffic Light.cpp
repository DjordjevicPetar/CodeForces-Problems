#include <iostream>
#include <algorithm>
using namespace std;

void Program() {
    int length, first = -1, maximum = 0, flag = 0;
    char curr;
    cin >> length >> curr;
    {
        int j = 0;
        char input;
        for (int i = 0; i < length; i++, j++)
        {
            cin >> input;
            if (input == 'g' && flag == 1) {
                if (first == -1)first = i;
                if (maximum < j)maximum = j;
                j = 0;
                flag = 0;
            }
            else if (input == curr && flag == 0) {
                j = 0;
                flag = 1;
            }
            else if (input == 'g' && first == -1)first = i;
        }
        if (curr == 'g') {
            cout << "0" << endl;
            return;
        }
        cout << max((j + first) * flag, maximum) << endl;
    }
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)Program();
}
