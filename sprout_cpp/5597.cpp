#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	arr[28];
	for (int i = 0; i < 28; i++)
		cin >> arr[i];
	
	for (int i = 1; i <= 30; i++)
	{
		for (int x = 0; x < 28; x++)
		{
			if (arr[x] == i)
				break ;
			else if (arr[x] != i && x == 27)
				cout << i << '\n';
		}
	}
	return 0;
}
