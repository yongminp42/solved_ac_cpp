#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, m, temp, result;
	cin >> n >> m;
	int	arr[n];
	temp = 0;
	result = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		for (int x = i + 1; x < n; x++)
		{
			temp = arr[i] + arr[x];
			for (int y = x + 1; y < n; y++)
			{
				if (temp + arr[y] > result && temp + arr[y] <= m)
					result = temp + arr[y];
			}
		}
		
	}
	cout << result << '\n';
	return 0;
}
/*
	3중 for문을 사용안해도 되는 방법이 있지 않을까..?
*/