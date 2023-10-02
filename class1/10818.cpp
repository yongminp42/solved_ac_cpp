#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, min, max;
	cin >> n;
	int	arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	min = arr[0];
	max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << min << ' ' << max << '\n';

	return 0;
}
