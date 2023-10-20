#include <iostream>
#include <vector>
using namespace std;

int Try(vector<int>& arr, int left_index, int right_index, int cur) {
	if (left_index == 0 || right_index  == arr.size() - 1)return 1;
	if (arr[left_index - 1] > -1) {
		cur += arr[left_index - 1];
		left_index--;
	}
	if (arr[right_index + 1] > -1) {
		cur += arr[right_index + 1];
		right_index++;
	}
	if (left_index == 0 || right_index == arr.size() - 1)return 1;
	if (cur + arr[left_index - 1] >= 0 && Try(arr, left_index - 1, right_index, cur + arr[left_index - 1]))return 1;
	if (cur + arr[right_index + 1] >= 0 && Try(arr, left_index, right_index + 1, cur + arr[right_index + 1]))return 1;
	return 0;
}

void Program() {
	int len, pos;
	vector<int> arr;
	cin >> len >> pos;
	pos--;
	for (int i = 0, temp; i < len; i++)
	{
		cin >> temp;
		if (i == 0 || (arr[i - 1] >= 0) != (temp >= 0))arr.push_back(temp);
		else {
			arr[i - 1] += temp;
			len--;
			i--;
			if (i < pos)pos--;
		}
	}
	if (Try(arr, pos, pos, arr[pos]))cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		Program();
	}
}