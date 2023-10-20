#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long size, height, sum = 0, min = 1000000000, min_index;
    cin >> size >> height;
    vector<int> fence(size);
    for (int i = 0; i < size; i++)cin >> fence[i];
    for (int i = 0, j = 0; i < size; i++)
    {
        sum += fence[i];
        if (j == height)sum -= fence[i - height];
        else j++;
        if (sum < min && j == height) {
            min = sum;
            min_index = i - height + 2;
        }
    }
    cout << min_index;
}