#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int length, *arr;
	cin >> length;
	arr = new int[length];
	for (int i = 0; i < length; i++)cin >> arr[i];
	sort(arr, arr + length);
	for (int i = 0; i < length; i++)cout << arr[i] << ' ';
}