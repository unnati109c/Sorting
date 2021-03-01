#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

int partition(vi &arr, int l, int r)
{
	int id = rand() % (r - l + 1) + l;
	swap(arr[r], arr[id]);

	int i = l;

	for (int j = l; j <= r; ++j)
		if (arr[j] <= arr[r])
			swap(arr[i], arr[j]), i++;

	return i - 1;
}

void quick_sort(vi &arr, int l, int r)
{
	if (l >= r)
		return;

	int p_i = partition(arr, l, r);
	quick_sort(arr, l, p_i - 1);
	quick_sort(arr, p_i + 1, r);
}

int32_t main()
{
	int n; cin >> n;
	vi arr(n);

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	quick_sort(arr, 0, n - 1);

	for (int i = 0; i < n; ++i)
		cout << arr[i] << ' ';
	cout << '\n';
	return 0;
}
