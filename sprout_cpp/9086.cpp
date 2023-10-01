#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int		t;
	cin >> t;

	string arr[t];

	for (int i = 0; i < t; i++)
		cin >> arr[i];
	
	for (int i = 0; i < t; i++)
	{
		for (int n = 0; arr[i][n]; n++)
		{
			if (arr[i][n + 1] == '\0')
				cout << arr[i][0] << arr[i][n] << '\n';
		}
	}
	return 0;
}
/*
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	이거 빼먹어서 재채점...
*/