#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, m, temp;
	cin >> n >> m;
	int	arr[n][m];
	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < m; y++)
			cin >> arr[x][y];
	}

	temp = 0;
	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < m; y++)
		{
			cin >> temp;
			arr[x][y] += temp;
		}
	}
	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < m; y++)
			cout << arr[x][y] << " ";
		cout << '\n';
	}
	return 0;
}
