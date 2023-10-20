#include <iostream>
using namespace std;

void Program() {
    int flag = 0, bigFlag = 0;
    char temp;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> temp;
            if (temp == 'B')
            {
                flag = 1;
            }
        }
        if (flag == 0)bigFlag = 1;
        flag = 0;
    }
    if (bigFlag)cout << "R" << endl;
    else cout << "B" << endl;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)Program();
}