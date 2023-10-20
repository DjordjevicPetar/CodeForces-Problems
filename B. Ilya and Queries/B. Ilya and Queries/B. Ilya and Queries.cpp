#include <iostream>
#include <vector>
using namespace std;

vector<int> InitString() {
	vector<int> adj_at = { 0 };
	char last = getchar(), next;
	while ((next = getchar()) != '\n') {
		adj_at.push_back(adj_at[adj_at.size() - 1] + ((last == next) ? 1 : 0));
		last = next;
	}
	return adj_at;
}

int main()
{
	vector<int> arr = InitString();
	int test_cases;
	cin >> test_cases;
	{
		int first_index, second_index;
		while (test_cases--)
		{
			cin >> first_index >> second_index;
			cout << arr[second_index - 1] - arr[first_index - 1] << endl;
		}
	}
}