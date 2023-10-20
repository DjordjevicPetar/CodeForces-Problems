#include <iostream>
#include <vector>
using namespace std;

int Binary(vector<int>& arr,int start, int len, int num) {
	int mid = start + ceil((len - start) / 2.0);
	if (num >= arr[mid - 1] && num < arr[mid])return mid;
	if (num < arr[mid])return Binary(arr, start, mid - 1, num);
	else return Binary(arr, mid + 1, len, num);
}

int main()
{
	int num_of_piles, tests;
	vector<int> piles = {1};
	cin >> num_of_piles;
	for (int i = 0, temp; i < num_of_piles; i++)
	{
		cin >> temp;
		piles.push_back(temp + piles.back());
	}
	cin >> tests;
	for (int temp = 0; tests--;)
	{
		cin >> temp;
		cout << Binary(piles, 0, num_of_piles, temp) << endl;
	}
}