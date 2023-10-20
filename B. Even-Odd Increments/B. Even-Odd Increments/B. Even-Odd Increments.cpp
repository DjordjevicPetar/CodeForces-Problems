#include <iostream>
using namespace std;

void Program() {
    int num_of_even = 0, num_of_odd = 0, length, queries;
    long long even = 0, odd = 0;
    cin >> length >> queries;
    for (int i = 0, temp; i < length; i++)
    {
        cin >> temp;
        ((temp % 2) ? odd : even) += temp;
        ((temp % 2) ? num_of_odd : num_of_even)++;
    }
    {
        pair<int, int> input;
        for (int i = 0; i < queries; i++)
        {
            cin >> input.first >> input.second;
            if (input.second % 2 == 0)
                ((input.first % 2) ? odd : even) += ((input.first % 2) ? num_of_odd : num_of_even) * input.second;
            else if (input.first) {
                even += odd + num_of_odd * input.second;
                num_of_even += num_of_odd;
                num_of_odd = odd = 0;
            }
            else {
                odd += even + num_of_even * input.second;
                num_of_odd += num_of_even;
                num_of_even = even = 0;
            }
            cout << odd + even << endl;
        }
    }
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)Program();
}