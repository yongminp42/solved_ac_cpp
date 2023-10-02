#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	arr[9];
	int	max_index, max;
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	
	max_index = 1;
	max = arr[0];

	for (int i = 1; i < 9; i++)
	{
		if (max < arr[i])
		{
			max_index = i + 1;
			max = arr[i];
		}
	}
	cout << max << '\n' << max_index << '\n';

	return 0;
}
